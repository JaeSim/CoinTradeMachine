package profile;

public class UserAgent {
	private Exchanges.Type exchangeType;
	private String id;
	private String password;
	private RestApis restapis;
	private long minTax;
	
	public UserAgent(Exchanges.Type exchangeType, String id, String password) {
		this.exchangeType = exchangeType;
		this.id = id;
		this.password = password;
		this.restapis = RestApis.getRestAPIs(exchangeType);
	}
	
	public String toStringName() {
		return exchangeType.toString();
	}
}
