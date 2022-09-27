function swiperVarianRasa() {

    var swiper = new Swiper(".swiperVarianRasa", {
        grabCursor: true,
        slidesPerView: 2,
        spaceBetween: 22,
        centeredSlides: false,
        paginationClickable: true,

        /*     loop: true,*/
        //hashNavigation: {
        //    watchState: true,
        //},
        autoplay: {
            delay: 1,
            disableOnInteraction: false,
        },
        speed: 2000,
        breakpoints: {
            501: {
                slidesPerView: 3.5,

            },
            768: {
                slidesPerView: 4.5,

            },
            992: {
                slidesPerView: 5.5,

            }
        },

        pagination: {
            el: ".white-bullet",
            clickable: true,
        },

    })

}

function swiperToko() {

    var swiper = new Swiper(".swiperToko", {
        grabCursor: true,
        slidesPerView: 2,
        spaceBetween: 30,
        loop: true,
        autoplay: {
            delay: 1,
            disableOnInteraction: false,
        },
        speed: 2000,
        //hashNavigation: {
        //    watchState: true,
        //},
        breakpoints: {
            501: {
                slidesPerView: 3,
                loop:true,
            },
            768: {
                slidesPerView: 3.5,
                loop: true,
            },
            992: {
                slidesPerView: 4.5,
                loop: true,
            }
        },
        pagination: {
            el: ".red-bullet",
            clickable: true,
        },
    });
}

function swiperMitra() {
    var swiper = new Swiper(".swiperMitra", {
        grabCursor: true,
        slidesPerView: 2,
        spaceBetween: 30,
        autoplay: {
            delay: 1,
            disableOnInteraction: false
        },
        speed: 1500,
        loop: true,
        hashNavigation: {
            watchState: true,
        },
        breakpoints: {
            420: {
                slidesPerView: 3,
                loop: true,
            },
            501: {
                slidesPerView: 3.5,
                loop: true,
            },
            502: {
                slidesPerView: 2.5,
                loop: true,
            },
            768: {
                slidesPerView: 3.5,
                loop: true,
            },
            992: {
                slidesPerView: 4.5,
                loop: true,
            },
            1200: {
                slidesPerView: 5.5,
                loop: true,
            }
        },
        pagination: {
            el: ".mitra-bullet",
            clickable: true,
        },

    });
}