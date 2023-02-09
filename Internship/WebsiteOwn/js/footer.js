const createFooter = () => {
    let footer = document.querySelector('footer');

    footer.innerHTML = `        <div class="footer-content">
    <img src="img/background.png" class="logo" alt="">
    <div class="footer-ul-container">
        <ul class="category">
            <li class="category-title">women</li>
            <li><a href="#" class="footer-link">Dresses</a></li>
            <li><a href="#" class="footer-link">Pants</a></li>
            <li><a href="#" class="footer-link">Skirts</a></li>
        </ul>
        <ul class="category">
            <li class="category-title">men</li>
            <li><a href="#" class="footer-link">Shirts</a></li>
            <li><a href="#" class="footer-link">Pants</a></li>
            <li><a href="#" class="footer-link">Hoodies</a></li>
        </ul>
        <ul class="category">
            <li class="category-title">Kids</li>
        </ul>
        <ul class="category">
            <li class="category-title">Links</li>
            <li><a href="#" class="footer-link">Home</a></li>
            <li><a href="#" class="footer-link">Login</a></li>
            <li><a href="#" class="footer-link">Contact</a></li>
        </ul>
    </div>
</div>
<p class="footer-credit">Copyright @Ecommerce 2022-23</p>    `;
}

createFooter();