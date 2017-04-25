// This is a test harness for your module
// You should do something interesting in this harness
// to test out the module and to provide instructions
// to users on how to use it by example.


// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});



// TODO: write your module tests here
var tistartapp = require('com.mobidonia.tistartapp');
Ti.API.info("module is => " + tistartapp);


//INIT THE MODULE -- Also shows splash
tistartapp.init("207560704","101666124");

//BANNER

//Create banner holder
var bannerHolder = Ti.UI.createView({
    bottom :'0dp',
    height : "50dp",
    width:"100%",
});
win.add(bannerHolder);

// Method For create Banner View
var theBanner=tistartapp.createBanner({
		bottom : '0dp',
		height : '100',
	});
bannerHolder.add(theBanner);
win.open();

