/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("www.saucedemo.com", 
		"URL=https://www.saucedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("submit", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("submit_2", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("index.html", 
		"URL=https://www.saucedemo.com/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	/* login */

	lr_think_time(11);

	web_custom_request("submit_3", 
		"URL=https://events.backtrace.io/api/unique-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "1");

	web_custom_request("submit_4", 
		"URL=https://events.backtrace.io/api/summed-events/submit?universe=UNIVERSE&token=TOKEN", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=https://www.saucedemo.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
