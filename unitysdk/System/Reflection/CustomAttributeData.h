#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Reflection/CustomAttributeNamedArgument.h"
#include "unitysdk/System/Reflection/CustomAttributeTypedArgument.h"

namespace System { class RuntimeType; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Reflection { class Assembly; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class CustomAttributeData_LazyCAttrData; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class Module; }
namespace System::Reflection { class ParameterInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x17998150)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTESINTERNAL_OFFSET UNITYSDK_OFFSET(0x179975D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x17997550)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x17997650)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_3_OFFSET UNITYSDK_OFFSET(0x179976D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x179974D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17998BC0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x17997750)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x179973F0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x179973E0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_NAMEDARGUMENTS_OFFSET UNITYSDK_OFFSET(0x17997460)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x17997350)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x17997370)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17997780)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x179972D0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x179972C0)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeData_TypeDefinitionIndex = 597;

	class CustomAttributeData : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* ctorInfo; // 0x10
		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs; // 0x18
		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs; // 0x20
		::System::Reflection::CustomAttributeData_LazyCAttrData* lazyData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly, ::System::IntPtr data, ::System::UInt32 data_length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_1_OFFSET))(this, ctorInfo, assembly, data, data_length);
		}

		static ::System::Void ResolveArgumentsInternal(::System::Reflection::ConstructorInfo* ctor, ::System::Reflection::Assembly* assembly, ::System::IntPtr data, ::System::UInt32 data_length, ::Il2CppArray<::System::Object*>*& ctorArgs, ::Il2CppArray<::System::Object*>*& namedArgs)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, ::System::UInt32, ::Il2CppArray<::System::Object*>*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTSINTERNAL_OFFSET))(ctor, assembly, data, data_length, ctorArgs, namedArgs);
		}

		::System::Void ResolveArguments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTS_OFFSET))(this);
		}

		::System::Reflection::ConstructorInfo* get_Constructor()
		{
			return ((::System::Reflection::ConstructorInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* get_ConstructorArguments()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTORARGUMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* get_NamedArguments()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_NAMEDARGUMENTS_OFFSET))(this);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::Assembly* target)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET))(target);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes_1(::System::Reflection::MemberInfo* target)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_1_OFFSET))(target);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesInternal(::System::RuntimeType* target)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTESINTERNAL_OFFSET))(target);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes_2(::System::Reflection::Module* target)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_2_OFFSET))(target);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes_3(::System::Reflection::ParameterInfo* target)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_3_OFFSET))(target);
		}

		::System::Type* get_AttributeType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_ATTRIBUTETYPE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
