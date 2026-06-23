#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::IO { class Stream; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection::Emit { class DynamicMethod; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { class JsonSerializer_NonGeneric_DeserializeJsonReader; }
namespace Utf8Json { class JsonSerializer_NonGeneric_SerializeJsonWriter; }

#define UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1E168450)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E168280)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_NonGeneric_CompiledMethods_TypeDefinitionIndex = 91085;

	class JsonSerializer_NonGeneric_CompiledMethods : public ::System::Object
	{
	public:
		::Utf8Json::JsonSerializer_NonGeneric_DeserializeJsonReader* deserialize4; // 0x10
		::System::Action_3<::System::IO::Stream*, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*>* serialize2; // 0x18
		::System::Func_4<::Il2CppArray<::System::Byte>*, ::System::Int32, ::Utf8Json::IJsonFormatterResolver*, ::System::Object*>* deserialize2; // 0x20
		::System::Func_3<::System::IO::Stream*, ::Utf8Json::IJsonFormatterResolver*, ::System::Object*>* deserialize3; // 0x28
		::System::Func_3<::System::Object*, ::Utf8Json::IJsonFormatterResolver*, ::Il2CppArray<::System::Byte>*>* serialize1; // 0x30
		::System::Func_3<::System::Object*, ::Utf8Json::IJsonFormatterResolver*, ::System::ArraySegment_1<::System::Byte>>* serializeUnsafe; // 0x38
		::System::Func_3<::System::Object*, ::Utf8Json::IJsonFormatterResolver*, ::System::String*>* toJsonString; // 0x40
		::Utf8Json::JsonSerializer_NonGeneric_SerializeJsonWriter* serialize3; // 0x48
		::System::Func_3<::System::String*, ::Utf8Json::IJsonFormatterResolver*, ::System::Object*>* deserialize1; // 0x50

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS__CTOR_OFFSET))(this, type);
		}

		static ::System::Reflection::MethodInfo* GetMethod(::System::Type* type, ::System::String* name, ::Il2CppArray<::System::Type*>* arguments)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_COMPILEDMETHODS_GETMETHOD_OFFSET))(type, name, arguments);
		}
	};
}
