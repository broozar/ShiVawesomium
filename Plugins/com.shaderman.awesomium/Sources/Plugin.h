//-----------------------------------------------------------------------------
#ifndef __ShiVa_Awesomium_Plugin_h__
#define __ShiVa_Awesomium_Plugin_h__
//-----------------------------------------------------------------------------
#include "S3DXPlugin.h"
//-----------------------------------------------------------------------------

#define PLUGIN_AIPACKAGES_COUNT 1

//-----------------------------------------------------------------------------
// Class declaration
//-----------------------------------------------------------------------------

S3DX_DECLARE_PLUGIN ( ShiVa_Awesomium )
{
    S3DX_DECLARE_AIENGINEAPI        ( ) ;
    S3DX_DECLARE_PLUGIN_INSTANCE    ( ShiVa_Awesomium ) ;

public :
	// SMAN
	void OnEngineEvent ( S3DX::uint32 _iEventCode, S3DX::uint32 _iArgumentCount, S3DX::AIVariable *_pArguments );

    //-------------------------------------------------------------------------
    //  Constructor / Destructor
    //-------------------------------------------------------------------------
                                    ShiVa_Awesomium                    ( ) ;
                                   ~ShiVa_Awesomium                    ( ) ;

    //-------------------------------------------------------------------------
    //  Plugin content directory
    //-------------------------------------------------------------------------
            void                    SetContentsDirectory        ( const char *_pDirectory ) ;

    //-------------------------------------------------------------------------
    //  AI packages
    //-------------------------------------------------------------------------
            S3DX::uint32            GetAIPackageCount           ( ) const ;
    const   S3DX::AIPackage        *GetAIPackageAt              ( S3DX::uint32 _iIndex ) const ;


    //-------------------------------------------------------------------------
    //  User functions
    //-------------------------------------------------------------------------
    inline  const char             *GetContentsDirectory        ( ) const { return aContentsDirectory ; }

private :

    //-------------------------------------------------------------------------
    //  Variables
    //-------------------------------------------------------------------------
	S3DX::AIPackage *   aAIPackages			[PLUGIN_AIPACKAGES_COUNT] ;
    char                aContentsDirectory  [ 1024 ] ;
} ;


//-----------------------------------------------------------------------------
#endif
//-----------------------------------------------------------------------------
