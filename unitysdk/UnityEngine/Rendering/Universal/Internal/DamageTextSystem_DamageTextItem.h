#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x192877F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET UNITYSDK_OFFSET(0x19287860)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x19287850)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19287900)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_DamageTextItem_TypeDefinitionIndex = 30330;

	class DamageTextSystem_DamageTextItem : public ::System::Object
	{
	public:
		::System::Action_2<::System::UInt32, ::System::Single>* onEnd; // 0x10
		::UnityEngine::Transform* refTransform; // 0x18
		::System::String* text; // 0x20
		::UnityEngine::Vector3 posWorldOffset; // 0x28
		::System::Single charWidthOffset; // 0x34
		::System::Single fadeoutInterval; // 0x38
		::UnityEngine::Vector3 curWorldPos; // 0x3C
		::UnityEngine::Vector2 posScreenOffset; // 0x48
		::System::Single combineTextFadeOutStartTime; // 0x50
		::UnityEngine::Vector4 color; // 0x54
		::System::UInt32 entityId; // 0x64
		::System::Single scale; // 0x68
		::System::Single endTime; // 0x6C
		::UnityEngine::Matrix4x4 trs; // 0x70
		::System::Int32 blockOffset; // 0xB0
		::System::Single fadeoutTime; // 0xB4
		::System::Boolean isInPool; // 0xB8
		::System::Boolean isRandomChange; // 0xB9
		::System::Boolean isCombineDamageTextDestroyed; // 0xBA
		::System::Boolean isOnTop; // 0xBB
		::System::Single faceIndex; // 0xBC
		::System::Single fadeinInterval; // 0xC0
		::UnityEngine::Matrix4x4 uvOffsets; // 0xC4
		::System::UInt32 isSkipDefAttack; // 0x104
		::System::Single _textLength; // 0x108
		::System::Int32 blockIndex; // 0x10C
		::System::Single combineTextAddScale; // 0x110
		::System::UInt32 animType; // 0x114
		::UnityEngine::Matrix4x4 posXOffsets; // 0x118
		::UnityEngine::Vector3 refTransformInitPos; // 0x158
		::System::Single startTime; // 0x164
		::System::Int32 bitCount; // 0x168
		::System::Single combineTextRootScale; // 0x16C
		::System::Int32 refTransformFollowType; // 0x170
		::System::Single randomChangeTime; // 0x174
		::System::UInt32 isCombineDamageText; // 0x178
		::System::Single fadeinTime; // 0x17C
		::System::Single flash; // 0x180
		::System::Single showTime; // 0x184

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET))(this);
		}

		::System::Single get_textLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET))(this);
		}

		::System::Void set_textLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET))(this);
		}
	};
}
