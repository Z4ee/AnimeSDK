#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace ZenFulcrum::EmbeddedBrowser { template <typename T> class Promise_1___c; }

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int Promise_1___c_TypeDefinitionIndex = 37363;

	template <typename PromisedT>
	class Promise_1___c : public ::System::Object
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::Promise_1___c<PromisedT>** StaticGet___9()
		{
			return (::ZenFulcrum::EmbeddedBrowser::Promise_1___c<PromisedT>**)Il2CppClass::FromTypeDefinitionIndex(Promise_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<PromisedT>** StaticGet___9__50_0()
		{
			return (::System::Action_1<PromisedT>**)Il2CppClass::FromTypeDefinitionIndex(Promise_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__50_1()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(Promise_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
