
// ========================== NAVBAR SCCROLLLL SMOOTH BLAZOR ======================

function navbarSmooth() {

    console.log("halo")
    const links = document.querySelectorAll(".offcanvas-body .menu li a");
    console.log(links);

    for (const link of links) {
        link.addEventListener("click", clickHandler);
    }

    function clickHandler(e) {
        e.preventDefault();
        const href = this.getAttribute("href");
        console.log(href);
        document.querySelector(href).scrollIntoView({
            behavior: "smooth"
        });
    }

}