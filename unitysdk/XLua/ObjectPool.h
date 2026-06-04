#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/XLua/ObjectPool_Slot.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTPOOL_ADD_OFFSET UNITYSDK_OFFSET(0x12EA5E70)
#define XLUA_OBJECTPOOL_CHECK_OFFSET UNITYSDK_OFFSET(0x12E95E70)
#define XLUA_OBJECTPOOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x12EA5DA0)
#define XLUA_OBJECTPOOL_EXTEND_CAPACITY_OFFSET UNITYSDK_OFFSET(0x12EA5DD0)
#define XLUA_OBJECTPOOL_GET_ALLOCEDCOUNT_OFFSET UNITYSDK_OFFSET(0x12EA5D40)
#define XLUA_OBJECTPOOL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x12EA5D60)
#define XLUA_OBJECTPOOL_GET_OFFSET UNITYSDK_OFFSET(0x12EA5F90)
#define XLUA_OBJECTPOOL_GET_SLOTSIZE_OFFSET UNITYSDK_OFFSET(0x12EA5D20)
#define XLUA_OBJECTPOOL_REMOVE_OFFSET UNITYSDK_OFFSET(0x12EA5FD0)
#define XLUA_OBJECTPOOL_REPLACE_OFFSET UNITYSDK_OFFSET(0x12EA6040)
#define XLUA_OBJECTPOOL_SET_ALLOCEDCOUNT_OFFSET UNITYSDK_OFFSET(0x12EA5D50)
#define XLUA_OBJECTPOOL_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x12EA5F30)
#define XLUA_OBJECTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x12EA6090)

namespace XLua
{
	inline static constexpr unsigned int ObjectPool_TypeDefinitionIndex = 47024;

	class ObjectPool : public ::System::Object
	{
	public:
		// static const ::System::Int32 LIST_END = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 ALLOCED = 0xFFFFFFFE; // 0x0
		::Il2CppArray<::XLua::ObjectPool_Slot>* list; // 0x10
		::System::Int32 freelist; // 0x18
		::System::Int32 count; // 0x1C
		::System::Int32 _allocedCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_SlotSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_GET_SLOTSIZE_OFFSET))(this);
		}

		::System::Int32 get_AllocedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_GET_ALLOCEDCOUNT_OFFSET))(this);
		}

		::System::Void set_AllocedCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_SET_ALLOCEDCOUNT_OFFSET))(this, a1);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_CLEAR_OFFSET))(this);
		}

		::System::Void extend_capacity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_EXTEND_CAPACITY_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_ADD_OFFSET))(this, a1);
		}

		::System::Boolean TryGetValue(::System::Int32 a1, ::System::Object*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Object*&))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Object* Get(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_GET_OFFSET))(this, a1);
		}

		::System::Object* Remove(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_REMOVE_OFFSET))(this, a1);
		}

		::System::Object* Replace(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_REPLACE_OFFSET))(this, a1, a2);
		}

		::System::Int32 Check(::System::Int32 a1, ::System::Int32 a2, ::System::Func_2<::System::Object*, ::System::Boolean>* a3, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* a4, ::XLua::ObjectTranslator* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Func_2<::System::Object*, ::System::Boolean>*, ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_CHECK_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
