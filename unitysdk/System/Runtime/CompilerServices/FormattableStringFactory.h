#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class FormattableString; }
namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1C326160)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FormattableStringFactory_TypeDefinitionIndex = 1384;

	class FormattableStringFactory : public ::System::Object
	{
	public:
		static ::System::FormattableString* Create(::System::String* format, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::FormattableString*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CREATE_OFFSET))(format, arguments);
		}
	};
}
