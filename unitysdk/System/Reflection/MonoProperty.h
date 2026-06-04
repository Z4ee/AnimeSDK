#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MonoPropertyInfo.h"
#include "unitysdk/System/Reflection/PInfo.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/Reflection/RuntimePropertyInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoProperty_GetterAdapter; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { template <typename T1, typename T2> class MonoProperty_Getter_2; }
namespace System::Reflection { template <typename T> class MonoProperty_StaticGetter_1; }

#define SYSTEM_REFLECTION_MONOPROPERTY_CACHEPROPERTYINFO_OFFSET UNITYSDK_OFFSET(0x1875A1F0)
#define SYSTEM_REFLECTION_MONOPROPERTY_CREATEGETTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x1875AC50)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETACCESSORS_OFFSET UNITYSDK_OFFSET(0x1875A4D0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1875ABF0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTESDATA_OFFSET UNITYSDK_OFFSET(0x1875B510)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_1_OFFSET UNITYSDK_OFFSET(0x1875AC40)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1875AC30)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETGETMETHOD_OFFSET UNITYSDK_OFFSET(0x1875A780)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETINDEXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1875A800)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETOPTIONALCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1875B4E0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETRAWCONSTANTVALUE_OFFSET UNITYSDK_OFFSET(0x1875AC10)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETREQUIREDCUSTOMMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1875B500)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETSETMETHOD_OFFSET UNITYSDK_OFFSET(0x1875AB70)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1875B040)
#define SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1875B000)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1875A230)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1875A260)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1875A2B0)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1875A430)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1875A480)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1875A300)
#define SYSTEM_REFLECTION_MONOPROPERTY_GET_REFLECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1875A3F0)
#define SYSTEM_REFLECTION_MONOPROPERTY_ISDEFINED_OFFSET UNITYSDK_OFFSET(0x1875AC20)
#define SYSTEM_REFLECTION_MONOPROPERTY_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1875B2C0)
#define SYSTEM_REFLECTION_MONOPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1875B590)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoProperty_TypeDefinitionIndex = 629;

	class MonoProperty : public ::System::Reflection::RuntimePropertyInfo
	{
	public:
		::System::IntPtr klass; // 0x10
		::System::IntPtr prop; // 0x18
		::System::Reflection::MonoPropertyInfo info; // 0x20
		::System::Reflection::PInfo cached; // 0x50
		::System::Reflection::MonoProperty_GetterAdapter* cached_getter; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY__CTOR_OFFSET))(this);
		}

		::System::Void CachePropertyInfo(::System::Reflection::PInfo a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_CACHEPROPERTYINFO_OFFSET))(this, a1);
		}

		::System::Reflection::PropertyAttributes get_Attributes()
		{
			return ((::System::Reflection::PropertyAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_CANWRITE_OFFSET))(this);
		}

		::System::Type* get_PropertyType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Type* get_ReflectedType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_REFLECTEDTYPE_OFFSET))(this);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GET_NAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* GetAccessors(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETACCESSORS_OFFSET))(this, a1);
		}

		::System::Reflection::MethodInfo* GetGetMethod(::System::Boolean a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETGETMETHOD_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* GetIndexParameters()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETINDEXPARAMETERS_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* GetSetMethod(::System::Boolean a1)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETSETMETHOD_OFFSET))(this, a1);
		}

		::System::Object* GetConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCONSTANTVALUE_OFFSET))(this);
		}

		::System::Object* GetRawConstantValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETRAWCONSTANTVALUE_OFFSET))(this);
		}

		::System::Boolean IsDefined(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_ISDEFINED_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* GetCustomAttributes_1(::System::Type* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTES_1_OFFSET))(this, a1, a2);
		}

		static ::System::Reflection::MonoProperty_GetterAdapter* CreateGetterDelegate(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Reflection::MonoProperty_GetterAdapter*(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_CREATEGETTERDELEGATE_OFFSET))(a1);
		}

		::System::Object* GetValue(::System::Object* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Object* GetValue_1(::System::Object* a1, ::System::Reflection::BindingFlags a2, ::System::Reflection::Binder* a3, ::Il2CppArray<::System::Object*>* a4, ::System::Globalization::CultureInfo* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETVALUE_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SetValue(::System::Object* a1, ::System::Object* a2, ::System::Reflection::BindingFlags a3, ::System::Reflection::Binder* a4, ::Il2CppArray<::System::Object*>* a5, ::System::Globalization::CultureInfo* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_SETVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Il2CppArray<::System::Type*>* GetOptionalCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETOPTIONALCUSTOMMODIFIERS_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* GetRequiredCustomModifiers()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETREQUIREDCUSTOMMODIFIERS_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_GETCUSTOMATTRIBUTESDATA_OFFSET))(this);
		}
	};
}
