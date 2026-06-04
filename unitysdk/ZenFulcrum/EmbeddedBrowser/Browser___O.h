#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ChangeFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ConsoleFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_DisplayDialogFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ForwardJSCallFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NavStateFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NewWindowFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ReadyFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_ReportFunc; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Browser___O_TypeDefinitionIndex = 36398;

	class Browser___O : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc** StaticGet__5___CB_NavStateFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_NavStateFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64E80);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc** StaticGet__4___CB_ReadyFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReadyFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64E88);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ConsoleFunc** StaticGet__2___CB_ConsoleFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_ConsoleFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64E90);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc** StaticGet__3___CB_DisplayDialogFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_DisplayDialogFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64E98);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeFunc** StaticGet__1___CB_ChangeFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_ChangeFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64EA0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc** StaticGet__7___CB_NewWindowFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewWindowFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64EA8);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReportFunc** StaticGet__6___CB_ReportFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_ReportFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64EB0);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_ForwardJSCallFunc** StaticGet__0___CB_ForwardJSCallFunc()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_ForwardJSCallFunc**)Il2CppClass::FromTypeDefinitionIndex(Browser___O_TypeDefinitionIndex)->GetStaticField(0x64EB8);
		}
	};
}
