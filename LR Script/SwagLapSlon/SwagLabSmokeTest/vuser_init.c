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

	

	web_url("index.html", 
		"URL=https://www.saucedemo.com/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.saucedemo.com/service-worker.js", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("TLS_SNI", "0");

	

	

	return 0;
}
