#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/RuntimeFieldHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Runtime::InteropServices { class MarshalAsAttribute; }

#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x1B8AABE0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_112470CB691FDA03_OFFSET UNITYSDK_OFFSET(0x1B8AA960)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_174799846CA15A4F_OFFSET UNITYSDK_OFFSET(0x1B8AA630)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_2F6219C4A95C40F8_1_OFFSET UNITYSDK_OFFSET(0x1B8AAC00)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_2F6219C4A95C40F8_OFFSET UNITYSDK_OFFSET(0x1B8AA880)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_33E1CA6DAAD71527_OFFSET UNITYSDK_OFFSET(0x1B8AAB90)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_49E3FA61F17A6A16_OFFSET UNITYSDK_OFFSET(0x1B8AA540)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_4AF4168DFA35476A_OFFSET UNITYSDK_OFFSET(0x1B8AA8B0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_4C30F5859860564D_OFFSET UNITYSDK_OFFSET(0x1B8AA970)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_683AB4C0BF80802E_OFFSET UNITYSDK_OFFSET(0x1B8AA6E0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1B8AA530)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_BDBBE7F5A62DA389_OFFSET UNITYSDK_OFFSET(0x1B8AA660)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1B8AABF0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_E291BBBD9ADF338F_OFFSET UNITYSDK_OFFSET(0x1B8AA900)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1B8AA570)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x1B8AA590)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x1B8AA5B0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_4_OFFSET UNITYSDK_OFFSET(0x1B8AA5D0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_5_OFFSET UNITYSDK_OFFSET(0x1B8AA5F0)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_6_OFFSET UNITYSDK_OFFSET(0x1B8AA610)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1B8AA550)
#define SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F4E5905C244D752D_OFFSET UNITYSDK_OFFSET(0x1B8AA760)

namespace System::Reflection
{
	inline static constexpr unsigned int FieldInfo_TypeDefinitionIndex = 579;

	class FieldInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::MemberTypes Method_2_49E3FA61F17A6A16()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_49E3FA61F17A6A16_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_1_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_2_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_3_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_4_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_5_OFFSET))(this);
		}

		::System::Boolean Method_2_F0088C88851A7DFB_6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F0088C88851A7DFB_6_OFFSET))(this);
		}

		::System::Void Method_2_174799846CA15A4F(::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_174799846CA15A4F_OFFSET))(this, obj, value);
		}

		static ::System::Reflection::FieldInfo* Method_2_BDBBE7F5A62DA389(::System::IntPtr field_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_BDBBE7F5A62DA389_OFFSET))(field_handle, type_handle);
		}

		static ::System::Reflection::FieldInfo* Method_2_683AB4C0BF80802E(::System::RuntimeFieldHandle handle)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_683AB4C0BF80802E_OFFSET))(handle);
		}

		static ::System::Reflection::FieldInfo* Method_2_F4E5905C244D752D(::System::RuntimeFieldHandle handle, ::System::RuntimeTypeHandle declaringType)
		{
			return ((::System::Reflection::FieldInfo*(*)(::System::RuntimeFieldHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_F4E5905C244D752D_OFFSET))(handle, declaringType);
		}

		::System::Int32 Method_2_4AF4168DFA35476A()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_4AF4168DFA35476A_OFFSET))(this);
		}

		::System::Void Method_2_E291BBBD9ADF338F(::System::TypedReference obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TypedReference, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_E291BBBD9ADF338F_OFFSET))(this, obj, value);
		}

		::System::Runtime::InteropServices::MarshalAsAttribute* Method_2_112470CB691FDA03()
		{
			return ((::System::Runtime::InteropServices::MarshalAsAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_112470CB691FDA03_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* Method_2_4C30F5859860564D()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_4C30F5859860564D_OFFSET))(this);
		}

		::System::Object* Method_2_33E1CA6DAAD71527()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_33E1CA6DAAD71527_OFFSET))(this);
		}

		::System::Boolean Method_2_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_083577508CCFDAF3_OFFSET))(this, obj);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Boolean Method_2_2F6219C4A95C40F8(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_2F6219C4A95C40F8_OFFSET))(left, right);
		}

		static ::System::Boolean Method_2_2F6219C4A95C40F8_1(::System::Reflection::FieldInfo* left, ::System::Reflection::FieldInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_FIELDINFO_METHOD_2_2F6219C4A95C40F8_1_OFFSET))(left, right);
		}
	};
}
