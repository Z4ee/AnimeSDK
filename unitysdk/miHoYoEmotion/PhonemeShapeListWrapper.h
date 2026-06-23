#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class PhonemeShape; }

#define MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BB0BE00)
#define MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1BB0BDF0)
#define MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BB0BE60)
#define MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0BF00)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int PhonemeShapeListWrapper_TypeDefinitionIndex = 39370;

	class PhonemeShapeListWrapper : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::miHoYoEmotion::PhonemeShape*>* _list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::miHoYoEmotion::PhonemeShape*>* get_list()
		{
			return ((::System::Collections::Generic::List_1<::miHoYoEmotion::PhonemeShape*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER_GET_LIST_OFFSET))(this);
		}

		::miHoYoEmotion::PhonemeShape* get_Item(::System::Int32 i)
		{
			return ((::miHoYoEmotion::PhonemeShape*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::miHoYoEmotion::PhonemeShape* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::miHoYoEmotion::PhonemeShape*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_PHONEMESHAPELISTWRAPPER_SET_ITEM_OFFSET))(this, i, value);
		}
	};
}
