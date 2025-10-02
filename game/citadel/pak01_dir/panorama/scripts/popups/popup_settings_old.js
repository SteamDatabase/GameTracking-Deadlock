function changeActiveTab( nTab )
{
	$.DispatchEvent( 'CitadelSetActiveTab', nTab );
	
	var disableShowingAdvanced = [ 'InGameSubTab', 'OptionsTabContent', 'OptionsBottomNav' ];
	for ( var i = 0; i < disableShowingAdvanced.length; ++i )
	{
		var panel = $('#' + disableShowingAdvanced[ i ] );
		if ( panel )
		{
			panel.RemoveClass( 'ShowingAdvanced' );
		}
	}
}