#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_MessageFunc; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserNative_NewRequestFunc; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative___O_TypeDefinitionIndex = 36223;

	class BrowserNative___O : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc** StaticGet__1___NewRequestCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_NewRequestFunc**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___O_TypeDefinitionIndex)->GetStaticField(0x6A010);
		}
		static ::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc** StaticGet__0___LogCallback()
		{
			return (::ZenFulcrum::EmbeddedBrowser::BrowserNative_MessageFunc**)Il2CppClass::FromTypeDefinitionIndex(BrowserNative___O_TypeDefinitionIndex)->GetStaticField(0x6A018);
		}
	};
}
