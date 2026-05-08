#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }

#define SYSTEM_DIAGNOSTICS_TRACEUTILS_CONVERTTOBASETYPEORENUM_OFFSET UNITYSDK_OFFSET(0x1A0FD8B0)
#define SYSTEM_DIAGNOSTICS_TRACEUTILS_GETRUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1A0FD8A0)
#define SYSTEM_DIAGNOSTICS_TRACEUTILS_VERIFYATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1A0FC350)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceUtils_TypeDefinitionIndex = 2776;

	class TraceUtils : public ::System::Object
	{
	public:
		static ::System::Object* GetRuntimeObject(::System::String* className, ::System::Type* baseType, ::System::String* initializeData)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEUTILS_GETRUNTIMEOBJECT_OFFSET))(className, baseType, initializeData);
		}

		static ::System::Object* ConvertToBaseTypeOrEnum(::System::String* value, ::System::Type* type)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEUTILS_CONVERTTOBASETYPEORENUM_OFFSET))(value, type);
		}

		static ::System::Void VerifyAttributes(::System::Collections::IDictionary* attributes, ::Il2CppArray<::System::String*>* supportedAttributes, ::System::Object* parent)
		{
			return ((::System::Void(*)(::System::Collections::IDictionary*, ::Il2CppArray<::System::String*>*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEUTILS_VERIFYATTRIBUTES_OFFSET))(attributes, supportedAttributes, parent);
		}
	};
}
