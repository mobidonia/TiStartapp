#TiSartApp Module

![StartApp Add](screenshots/sc1.png?raw=true =250x "StartApp")

Show StartApp Ads inside your titanium project

Register [here](https://portal.startapp.com/#/signup?referredby=rftczqb&preferredsite=pub&source=directURL)


Android implmentation
------------

Use your own android mainfest in tiapp.xml

Add this permissions
```<uses-permission android:name="android.permission.INTERNET" />
	<uses-permission android:name="android.permission.ACCESS_WIFI_STATE" />
	<uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" />
	<uses-permission android:name="android.permission.ACCESS_COARSE_LOCATION" />
	<uses-permission android:name="android.permission.ACCESS_FINE_LOCATION" />
	<uses-permission android:name="android.permission.RECEIVE_BOOT_COMPLETED" />
	<uses-permission android:name="android.permission.BLUETOOTH" />
```

Than in the <application> tag add the following
```
	<activity android:name="com.startapp.android.publish.adsCommon.activities.OverlayActivity"
			          android:theme="@android:style/Theme.Translucent"
			          android:configChanges="orientation|keyboardHidden|screenSize" />
			
	<activity android:name="com.startapp.android.publish.adsCommon.activities.FullScreenActivity"
	          android:theme="@android:style/Theme"
	          android:configChanges="orientation|keyboardHidden|screenSize" />
	          
	<service android:name="com.startapp.android.publish.common.metaData.PeriodicMetaDataService" />
	<service android:name="com.startapp.android.publish.common.metaData.InfoEventService" />
	<receiver android:name="com.startapp.android.publish.common.metaData.BootCompleteListener" >
		<intent-filter>
			<action android:name="android.intent.action.BOOT_COMPLETED" />
		</intent-filter>
	</receiver>
```
	
Using the module
------------
```
	var tistartapp = require('com.mobidonia.tistartapp');

	//INIT THE MODULE -- Also shows splash
	tistartapp.init("207560704","101666124");
	
	//Method For create Banner View
	var theBanner=tistartapp.createBanner({
			bottom : '0dp',
			height : '100',
		});
```
	
