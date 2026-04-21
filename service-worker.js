const CACHE_NAME = "rapidsos-v5";

/* Files to cache */

const urlsToCache = [
  "./",
  "./index.html",
  "./style.css",
  "./manifest.json",
  "./icon.png"
];

/* Install Service Worker */

self.addEventListener("install", function(event) {

  console.log("Service Worker Installed");

  event.waitUntil(

    caches.open(CACHE_NAME).then(function(cache) {

      return cache.addAll(urlsToCache);

    })

  );

});

/* Activate (remove old caches) */

self.addEventListener("activate", function(event) {

  console.log("Service Worker Activated");

  event.waitUntil(

    caches.keys().then(function(cacheNames) {

      return Promise.all(

        cacheNames.map(function(name) {

          if (name !== CACHE_NAME) {

            return caches.delete(name);

          }

        })

      );

    })

  );

});

/* Fetch Files */

self.addEventListener("fetch", function(event) {

  event.respondWith(

    caches.match(event.request).then(function(response) {

      return response || fetch(event.request);

    })

  );

});