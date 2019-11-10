package profile;

public class RestApis {
	private String mainUrl = "";
	private String searchUrl = "";
	private String buyUrl = "";
	private String sellUrl = "";
	public static RestApis getRestAPIs(Exchanges.Type exchange) {
		// TODO Auto-generated method stub
		RestApis restApis = new RestApis();
		switch (exchange) {
		case bitthume:
			restApis.mainUrl = "1";
			restApis.searchUrl = "2";
			restApis.buyUrl = "3";
			restApis.sellUrl = "4";
			break;
		
		default:
			break;
		}
		return restApis;
	}
	
	
}
