
// ========================== NAVBAR SCCROLLLL DOWN HIDE SCORLLL UP SHOW BLAZOR ======================

function navbarHideShow() {
    
    window.onscroll = function () {
        var scrollY = window.pageYOffset || document.documentElement.scrollTop;

        var header = document.querySelector('#scrollAutoHide');

        if (window.scrollY >= 350) {

            header.classList.add("bg-merah");
            header.classList.remove("bg-transparent");

            header.classList.add("pt-2")
            header.classList.remove("pt-4");
        } else {

            header.classList.remove("bg-merah");
            header.classList.add("bg-transparent");

            header.classList.add("pt-4")
            header.classList.remove("pt-2");
        }
      
        if (scrollY <= this.lastScroll) {
            header.style.visibility = 'visible';
            header.classList.remove('scrolled-down');
            header.classList.add('scrolled-up');
        } else {
            header.style.visibility = 'hidden';
            header.classList.remove('scrolled-up');
            header.classList.add('scrolled-down');
        }

        this.lastScroll = scrollY;
    }

}