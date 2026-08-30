#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net
{
	inline static constexpr unsigned int Logging_TypeDefinitionIndex = 2819;

	class Logging : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_On()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Logging_TypeDefinitionIndex)->GetStaticField(0x9280);
		}
	};
}
