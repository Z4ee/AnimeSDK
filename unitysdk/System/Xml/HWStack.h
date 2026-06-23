#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_XML_HWSTACK_ADDTOTOP_OFFSET UNITYSDK_OFFSET(0x1D16FDD0)
#define SYSTEM_XML_HWSTACK_CLONE_OFFSET UNITYSDK_OFFSET(0x1D170000)
#define SYSTEM_XML_HWSTACK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D16FE60)
#define SYSTEM_XML_HWSTACK_PEEK_OFFSET UNITYSDK_OFFSET(0x1D16FD80)
#define SYSTEM_XML_HWSTACK_POP_OFFSET UNITYSDK_OFFSET(0x1D16FD30)
#define SYSTEM_XML_HWSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x1D16FC40)
#define SYSTEM_XML_HWSTACK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D16FEF0)
#define SYSTEM_XML_HWSTACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D16FBE0)
#define SYSTEM_XML_HWSTACK__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D16FFE0)
#define SYSTEM_XML_HWSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D16FB80)

namespace System::Xml
{
	inline static constexpr unsigned int HWStack_TypeDefinitionIndex = 1791;

	class HWStack : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* stack; // 0x10
		::System::Int32 size; // 0x18
		::System::Int32 used; // 0x1C
		::System::Int32 growthRate; // 0x20
		::System::Int32 limit; // 0x24

		::System::Void _ctor(::System::Int32 GrowthRate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK__CTOR_OFFSET))(this, GrowthRate);
		}

		::System::Void _ctor_1(::System::Int32 GrowthRate, ::System::Int32 limit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK__CTOR_1_OFFSET))(this, GrowthRate, limit);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Object*>* stack, ::System::Int32 growthRate, ::System::Int32 used, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK__CTOR_2_OFFSET))(this, stack, growthRate, used, size);
		}

		::System::Object* Push()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_PUSH_OFFSET))(this);
		}

		::System::Object* Pop()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_POP_OFFSET))(this);
		}

		::System::Object* Peek()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_PEEK_OFFSET))(this);
		}

		::System::Void AddToTop(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_ADDTOTOP_OFFSET))(this, o);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_CLONE_OFFSET))(this);
		}
	};
}
