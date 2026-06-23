#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8649573A691533F8.h"

class Class_0_16E4307DCC419505_2;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace miHoYoEmotion { class ClipShapeManager; }
namespace miHoYoEmotion { class ElementManager; }
namespace miHoYoEmotion { class EyeKey; }
template <typename T> class Class_1_3B365E645019A36F;

#define MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION_INITDELAYREFRESHLIST_OFFSET UNITYSDK_OFFSET(0x1BB09870)
#define MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BB09990)
#define MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BB09920)
#define MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB09A10)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int GlobalTickManagerEmotion_TypeDefinitionIndex = 39374;

	class GlobalTickManagerEmotion : public ::Class_2_8649573A691533F8<::miHoYoEmotion::GlobalTickManagerEmotion*>
	{
	public:
		::Class_1_3B365E645019A36F<::miHoYoEmotion::ElementManager*>* _elementManagers; // 0x18
		::Class_1_3B365E645019A36F<::miHoYoEmotion::EyeKey*>* _eyeKeys; // 0x20
		::Class_1_3B365E645019A36F<::miHoYoEmotion::ClipShapeManager*>* _clipShapes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION__CTOR_OFFSET))(this);
		}

		::System::Void InitDelayRefreshList(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_2*>* delayRefreshList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_2*>*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION_INITDELAYREFRESHLIST_OFFSET))(this, delayRefreshList);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_GLOBALTICKMANAGEREMOTION_ONLATEUPDATE_OFFSET))(this);
		}
	};
}
