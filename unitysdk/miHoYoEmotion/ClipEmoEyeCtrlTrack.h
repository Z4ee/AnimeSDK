#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/EmoTrack.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace miHoYoEmotion { class ClipShapeManager; }
namespace miHoYoEmotion { class ElementManager; }
namespace miHoYoEmotion { class EyeKey; }
namespace miHoYoEmotion { class SequenceClipBakeData_EyeCtrlData; }

#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_ADDEYECTRLLIST_OFFSET UNITYSDK_OFFSET(0x1D027080)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_APPLY_OFFSET UNITYSDK_OFFSET(0x1D027660)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_INIT_OFFSET UNITYSDK_OFFSET(0x1D026D30)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D0272C0)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D027AD0)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0278E0)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK___BASE_APPLY_OFFSET UNITYSDK_OFFSET(0x1D027B10)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x1D027BE0)
#define MIHOYOEMOTION_CLIPEMOEYECTRLTRACK___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D027C80)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipEmoEyeCtrlTrack_TypeDefinitionIndex = 39980;

	class ClipEmoEyeCtrlTrack : public ::miHoYoEmotion::EmoTrack
	{
	public:
		static ::System::Int32* StaticGet_FaceBlushStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ClipEmoEyeCtrlTrack_TypeDefinitionIndex)->GetStaticField(0x99A0);
		}
		::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData* _currData; // 0x58
		::miHoYoEmotion::EyeKey* _eyeKey; // 0x60
		::System::Collections::Generic::List_1<::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData*>* _currList; // 0x68
		::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData* _lastData; // 0x70
		::miHoYoEmotion::ClipShapeManager* _clipManager; // 0x78
		::UnityEngine::GameObject* _eyeStar; // 0x80
		::System::Int32 _currIndex; // 0x88
		::System::Boolean _isPlaying; // 0x8C
		::System::Boolean _isPlayAtTime; // 0x8D
		::System::Single _currTime; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK__CCTOR_OFFSET))();
		}

		::System::Void Init(::miHoYoEmotion::ElementManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_INIT_OFFSET))(this, manager);
		}

		::System::Void AddEyeCtrlList(::System::Collections::Generic::List_1<::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData*>* eyeCtrlData, ::System::Boolean playAtTime, ::System::Boolean forceReset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::miHoYoEmotion::SequenceClipBakeData_EyeCtrlData*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_ADDEYECTRLLIST_OFFSET))(this, eyeCtrlData, playAtTime, forceReset);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK_APPLY_OFFSET))(this);
		}

		::System::Void __base_Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK___BASE_APPLY_OFFSET))(this);
		}

		::System::Void __base_Init(::miHoYoEmotion::ElementManager* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ElementManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK___BASE_INIT_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPEMOEYECTRLTRACK___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
