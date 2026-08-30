#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/CallingConventions.h"
#include "unitysdk/System/Reflection/ParameterAttributes.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class MemberInfo; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_REFLECTION_PARAMETERINFO_FORMATPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BDA1300)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1BDA2170)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BDA2160)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETDEFAULTVALUEIMPL_OFFSET UNITYSDK_OFFSET(0x1BDA2100)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BDA1A20)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETREALOBJECT_OFFSET UNITYSDK_OFFSET(0x1BDA2180)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BDA21E0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GETTYPEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1BD9F250)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1BDA1860)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1BDA2110)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ISIN_OFFSET UNITYSDK_OFFSET(0x1BDA1870)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x1BDA18F0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOUT_OFFSET UNITYSDK_OFFSET(0x1BDA1970)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_ISRETVAL_OFFSET UNITYSDK_OFFSET(0x1BDA1280)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x1BDA19F0)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BDA1A00)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_PARAMETERTYPE_OFFSET UNITYSDK_OFFSET(0x1BDA1850)
#define SYSTEM_REFLECTION_PARAMETERINFO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BDA1A10)
#define SYSTEM_REFLECTION_PARAMETERINFO_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1BDA21D0)
#define SYSTEM_REFLECTION_PARAMETERINFO_NEW_1_OFFSET UNITYSDK_OFFSET(0x1BD9EB40)
#define SYSTEM_REFLECTION_PARAMETERINFO_NEW_OFFSET UNITYSDK_OFFSET(0x1BD9FE00)
#define SYSTEM_REFLECTION_PARAMETERINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDA0D60)
#define SYSTEM_REFLECTION_PARAMETERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA0D50)

namespace System::Reflection
{
	inline static constexpr unsigned int ParameterInfo_TypeDefinitionIndex = 636;

	class ParameterInfo : public ::System::Object
	{
	public:
		::System::Type* ClassImpl; // 0x10
		::System::Object* DefaultValueImpl; // 0x18
		::System::Reflection::MemberInfo* MemberImpl; // 0x20
		::System::String* NameImpl; // 0x28
		::System::Int32 PositionImpl; // 0x30
		::System::Reflection::ParameterAttributes AttrsImpl; // 0x34
		::System::Runtime::InteropServices::MarshalAsAttribute* marshalAs; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_TOSTRING_OFFSET))(this);
		}

		static ::System::Void FormatParameters(::System::Text::StringBuilder* a1, ::Il2CppArray<::System::Reflection::ParameterInfo*>* a2, ::System::Reflection::CallingConventions a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::Il2CppArray<::System::Reflection::ParameterInfo*>*, ::System::Reflection::CallingConventions, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_FORMATPARAMETERS_OFFSET))(a1, a2, a3, a4);
		}

		::System::Type* get_ParameterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_PARAMETERTYPE_OFFSET))(this);
		}

		::System::Reflection::ParameterAttributes get_Attributes()
		{
			return ((::System::Reflection::ParameterAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_IsIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ISIN_OFFSET))(this);
		}

		::System::Boolean get_IsOptional()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOPTIONAL_OFFSET))(this);
		}

		::System::Boolean get_IsOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ISOUT_OFFSET))(this);
		}

		::System::Boolean get_IsRetval()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_ISRETVAL_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* get_Member()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_MEMBER_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_Position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_POSITION_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetPseudoCustomAttributes()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETPSEUDOCUSTOMATTRIBUTES_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetTypeModifiers(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETTYPEMODIFIERS_OFFSET))(this, a1);
		}

		::System::Object* GetDefaultValueImpl()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETDEFAULTVALUEIMPL_OFFSET))(this);
		}

		::System::Object* get_DefaultValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETREALOBJECT_OFFSET))(this, a1);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Type*>* GetRequiredCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_GETREQUIREDCUSTOMMODIFIERS_OFFSET))(this);
		}

		static ::System::Reflection::ParameterInfo* New(::System::Reflection::ParameterInfo* a1, ::System::Reflection::MemberInfo* a2)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Reflection::ParameterInfo*, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_NEW_OFFSET))(a1, a2);
		}

		static ::System::Reflection::ParameterInfo* New_1(::System::Type* a1, ::System::Reflection::MemberInfo* a2, ::System::Runtime::InteropServices::MarshalAsAttribute* a3)
		{
			return ((::System::Reflection::ParameterInfo*(*)(::System::Type*, ::System::Reflection::MemberInfo*, ::System::Runtime::InteropServices::MarshalAsAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_PARAMETERINFO_NEW_1_OFFSET))(a1, a2, a3);
		}
	};
}
