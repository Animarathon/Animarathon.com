/*Typography*/
@font-face {
  font-family: "Ostrich Sans Regular";
  src: local("Ostrich Sans Regular"),
       url("../media/typefaces/ostrich_sans/ostrich-sans-regular.ttf"),
       url("../media/typefaces/ostrich_sans/ostrich-sans-regular.woff"),
       url("../media/typefaces/ostrich_sans/ostrich-sans-regular.eot"),
       url("../media/typefaces/ostrich_sans/ostrich-sans-regular.svg");
}
@font-face {
  font-family: "League Gothic";
  src: local("League Gothic"),
       url("../media/typefaces/league_gothic/leaguegothic-regular-webfont.ttf"),
       url("../media/typefaces/league_gothic/leaguegothic-regular-webfont.woff"),
       url("../media/typefaces/league_gothic/leaguegothic-regular-webfont.eot"),
       url("../media/typefaces/league_gothic/leaguegothic-regular-webfont.svg");
}

h1, h2, h3, h4, h5, h6 {
	font-family: "League Gothic", sans-serif;
}

p {
	font-family: sans-serif;
}

nav {
	font-family: "Ostrich Sans Regular", sans-serif;
	font-size: 2em;
	letter-spacing: .1em;
	width: 100vw;
    text-align: center;
}

nav a {

	text-decoration: none;
}

a:hover {
	text-decoration: none;
	animation: change_color 6s infinite;
}

/*Utility*/
.backdrop {
	background: white;
    margin-bottom: 1em;
}

.prominent-text {
    text-align: center;
}

.prominent-box {
    margin-left: auto;
    margin-right: auto;
}

nav {
  width: 100%;
}

nav a {
	list-style: none;
}


/*Animation*/
body {
	animation: bg_change_color 60s infinite;
}

h1, h2 {
  padding-top: .3em;
}

h1, h2, h3, h4, h5, h6, a {
	animation: change_color 60s infinite;
}

a .button {
	animation: bg_change_color 60s infinite;
	color: white;
}

footer {
	background: white;
    margin-bottom: 0;
    border-bottom: 0;
}

table {
    overflow-x: auto;
}

tr:hover {
    background-color: #bebebe;
}

/*Animation Definitions*/
@keyframes change_color {
	000% {color: #879637;}
	050% {color: #e56f3b;}
	100% {color: #879637;}
}

@keyframes bg_change_color {
	000% {background: #879637;}
	050% {background: #e56f3b;}
	100% {background: #879637;}