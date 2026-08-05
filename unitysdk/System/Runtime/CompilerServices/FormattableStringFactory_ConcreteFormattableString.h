#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/FormattableString.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GETARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1CCB7E80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GETARGUMENT_OFFSET UNITYSDK_OFFSET(0x1CCB7EB0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GET_ARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CCB7E90)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1CCB7E70)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CCB7EF0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB7E60)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int FormattableStringFactory_ConcreteFormattableString_TypeDefinitionIndex = 1385;

	class FormattableStringFactory_ConcreteFormattableString : public ::System::FormattableString
	{
	public:
		::Il2CppArray<::System::Object*>* _arguments; // 0x10
		::System::String* _format; // 0x18

		::System::Void _ctor(::System::String* format, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING__CTOR_OFFSET))(this, format, arguments);
		}

		::System::String* get_Format()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GET_FORMAT_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetArguments()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GETARGUMENTS_OFFSET))(this);
		}

		::System::Int32 get_ArgumentCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GET_ARGUMENTCOUNT_OFFSET))(this);
		}

		::System::Object* GetArgument(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_GETARGUMENT_OFFSET))(this, index);
		}

		::System::String* ToString(::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_FORMATTABLESTRINGFACTORY_CONCRETEFORMATTABLESTRING_TOSTRING_OFFSET))(this, formatProvider);
		}
	};
}
