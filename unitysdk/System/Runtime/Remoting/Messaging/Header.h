#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int Header_TypeDefinitionIndex = 1312;

	class Header : public ::System::Object
	{
	public:
		::System::Object* Value; // 0x10
		::System::String* Name; // 0x18
		::System::String* HeaderNamespace; // 0x20
		::System::Boolean MustUnderstand; // 0x28
	};
}
