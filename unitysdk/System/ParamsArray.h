#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_PARAMSARRAY_GETATSLOW_OFFSET UNITYSDK_OFFSET(0x3C23620)
#define SYSTEM_PARAMSARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x3C235B0)
#define SYSTEM_PARAMSARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x3C23590)
#define SYSTEM_PARAMSARRAY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2628B0)
#define SYSTEM_PARAMSARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C234E0)
#define SYSTEM_PARAMSARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C23510)
#define SYSTEM_PARAMSARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3C23530)
#define SYSTEM_PARAMSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x3C234C0)

namespace System
{
	inline static constexpr unsigned int ParamsArray_TypeDefinitionIndex = 315;

	struct alignas(8) ParamsArray
	{
		static ::Il2CppArray<::System::Object*>** StaticGet_threeArgArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ParamsArray_TypeDefinitionIndex)->GetStaticField(0x1CFB0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_oneArgArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ParamsArray_TypeDefinitionIndex)->GetStaticField(0x1CFB8);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_twoArgArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ParamsArray_TypeDefinitionIndex)->GetStaticField(0x1CFC0);
		}
		::System::Object* arg0; // 0x10
		::System::Object* arg1; // 0x18
		::System::Object* arg2; // 0x20
		::Il2CppArray<::System::Object*>* args; // 0x28

		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY__CTOR_3_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY__CCTOR_OFFSET))();
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_GET_LENGTH_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Object* GetAtSlow(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_PARAMSARRAY_GETATSLOW_OFFSET))(this, a1);
		}
	};
}
