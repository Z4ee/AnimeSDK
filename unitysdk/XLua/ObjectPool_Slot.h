#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define XLUA_OBJECTPOOL_SLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x31380)

namespace XLua
{
	inline static constexpr unsigned int ObjectPool_Slot_TypeDefinitionIndex = 46435;

	struct alignas(8) ObjectPool_Slot
	{
		::System::Int32 next; // 0x10
		::System::Object* obj; // 0x18

		::System::Void _ctor(::System::Int32 next, ::System::Object* obj, ::System::String* t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + XLUA_OBJECTPOOL_SLOT__CTOR_OFFSET))(this, next, obj, t);
		}
	};
}
