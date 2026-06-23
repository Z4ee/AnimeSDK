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

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B17FB80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET UNITYSDK_OFFSET(0x1B17FBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B17FBE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17FCA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_DamageTextItem_TypeDefinitionIndex = 27153;

	class DamageTextSystem_DamageTextItem : public ::System::Object
	{
	public:
		::System::Action_2<::System::UInt32, ::System::Single>* onEnd; // 0x10
		::System::String* text; // 0x18
		::UnityEngine::Transform* refTransform; // 0x20
		::UnityEngine::Matrix4x4 trs; // 0x28
		::System::Single combineTextFadeOutStartTime; // 0x68
		::System::Single combineTextAddScale; // 0x6C
		::UnityEngine::Vector2 posScreenOffset; // 0x70
		::UnityEngine::Vector3 curWorldPos; // 0x78
		::System::Single flash; // 0x84
		::UnityEngine::Vector3 refTransformInitPos; // 0x88
		::UnityEngine::Vector3 posWorldOffset; // 0x94
		::System::Int32 blockOffset; // 0xA0
		::System::Single faceIndex; // 0xA4
		::System::Single fadeoutTime; // 0xA8
		::System::Single randomChangeTime; // 0xAC
		::System::UInt32 entityId; // 0xB0
		::System::Single fadeoutInterval; // 0xB4
		::System::Single charWidthOffset; // 0xB8
		::System::Single fadeinInterval; // 0xBC
		::System::UInt32 animType; // 0xC0
		::System::Single endTime; // 0xC4
		::System::Int32 bitCount; // 0xC8
		::System::Int32 refTransformFollowType; // 0xCC
		::System::Single fadeinTime; // 0xD0
		::System::Single scale; // 0xD4
		::System::Single combineTextRootScale; // 0xD8
		::System::UInt32 isCombineDamageText; // 0xDC
		::UnityEngine::Matrix4x4 posXOffsets; // 0xE0
		::System::Single _textLength; // 0x120
		::System::Single showTime; // 0x124
		::System::Int32 blockIndex; // 0x128
		::System::UInt32 isSkipDefAttack; // 0x12C
		::System::Boolean isOnTop; // 0x130
		::System::Boolean isRandomChange; // 0x131
		::System::Boolean isCombineDamageTextDestroyed; // 0x132
		::System::Boolean isInPool; // 0x133
		::System::Single startTime; // 0x134
		::UnityEngine::Matrix4x4 uvOffsets; // 0x138
		::UnityEngine::Vector4 color; // 0x178

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
