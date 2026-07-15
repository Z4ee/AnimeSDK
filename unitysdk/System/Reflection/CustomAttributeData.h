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

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AFC7150)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFC6140)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1AFC60C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_2_OFFSET UNITYSDK_OFFSET(0x1AFC61C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_3_OFFSET UNITYSDK_OFFSET(0x1AFC6240)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AFC6040)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AFC8040)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x1AFC62C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTORARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AFC5F60)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_CONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5F50)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_NAMEDARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AFC5FD0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1AFC5EC0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1AFC5EE0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AFC6350)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFC5E40)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5E30)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeData_TypeDefinitionIndex = 596;

	class CustomAttributeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs; // 0x10
		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs; // 0x18
		::System::Reflection::CustomAttributeData_LazyCAttrData* lazyData; // 0x20
		::System::Reflection::ConstructorInfo* ctorInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Reflection::ConstructorInfo* a1, ::System::Reflection::Assembly* a2, ::System::IntPtr a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void ResolveArgumentsInternal(::System::Reflection::ConstructorInfo* a1, ::System::Reflection::Assembly* a2, ::System::IntPtr a3, ::System::UInt32 a4, ::Il2CppArray<::System::Object*>*& a5, ::Il2CppArray<::System::Object*>*& a6)
		{
			return ((::System::Void(*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, ::System::UInt32, ::Il2CppArray<::System::Object*>*&, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_RESOLVEARGUMENTSINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6);
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

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::Assembly* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes_1(::System::Reflection::MemberInfo* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesInternal(::System::RuntimeType* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::RuntimeType*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTESINTERNAL_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes_2(::System::Reflection::Module* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::Module*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_2_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes_3(::System::Reflection::ParameterInfo* a1)
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::System::Reflection::ParameterInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETCUSTOMATTRIBUTES_3_OFFSET))(a1);
		}

		::System::Type* get_AttributeType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GET_ATTRIBUTETYPE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
