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

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_GET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C5B61E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_RESET_OFFSET UNITYSDK_OFFSET(0x1C5B6250)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM_SET_TEXTLENGTH_OFFSET UNITYSDK_OFFSET(0x1C5B6240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DAMAGETEXTSYSTEM_DAMAGETEXTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B6300)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DamageTextSystem_DamageTextItem_TypeDefinitionIndex = 27326;

	class DamageTextSystem_DamageTextItem : public ::System::Object
	{
	public:
		::System::Action_2<::System::UInt32, ::System::Single>* onEnd; // 0x10
		::System::String* text; // 0x18
		::UnityEngine::Transform* refTransform; // 0x20
		::System::UInt32 damageTextFaceType; // 0x28
		::System::Single charWidthOffset; // 0x2C
		::UnityEngine::Matrix4x4 posXOffsets; // 0x30
		::System::Single randomChangeTime; // 0x70
		::System::Int32 blockOffset; // 0x74
		::System::UInt32 entityId; // 0x78
		::System::Single endTime; // 0x7C
		::UnityEngine::Matrix4x4 uvOffsets; // 0x80
		::System::Int32 refTransformFollowType; // 0xC0
		::System::UInt32 animType; // 0xC4
		::System::Int32 bitCount; // 0xC8
		::System::Single combineTextAddScale; // 0xCC
		::System::Single _textLength; // 0xD0
		::System::Single combineTextRootScale; // 0xD4
		::UnityEngine::Vector3 refTransformInitPos; // 0xD8
		::System::Boolean isCombineDamageTextDestroyed; // 0xE4
		::System::Boolean isRandomChange; // 0xE5
		::System::Boolean isOnTop; // 0xE6
		::System::Boolean isInPool; // 0xE7
		::System::Single startTime; // 0xE8
		::UnityEngine::Matrix4x4 trs; // 0xEC
		::System::Single fadeoutInterval; // 0x12C
		::System::Single faceIndex; // 0x130
		::System::Single combineTextFadeOutStartTime; // 0x134
		::UnityEngine::Vector2 posScreenOffset; // 0x138
		::System::Single fadeinInterval; // 0x140
		::UnityEngine::Vector3 curWorldPos; // 0x144
		::UnityEngine::Vector3 posWorldOffset; // 0x150
		::System::Int32 blockIndex; // 0x15C
		::System::Single flash; // 0x160
		::System::Single scale; // 0x164
		::System::UInt32 isCombineDamageText; // 0x168
		::System::Single fadeoutTime; // 0x16C
		::System::Single showTime; // 0x170
		::UnityEngine::Vector4 color; // 0x174
		::System::UInt32 damageTextShowType; // 0x184
		::System::Single fadeinTime; // 0x188

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
