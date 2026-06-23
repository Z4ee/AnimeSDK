#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/RecorderUnitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/Timeline/KFrameFieldType.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_CHECKKFRAMEFIELDTYPE_OFFSET UNITYSDK_OFFSET(0x1E2DC900)
#define UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_FORCEREFRESHMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E2E0250)
#define UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_GETCHILDLEVEL_OFFSET UNITYSDK_OFFSET(0x1E2DFEA0)
#define UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_GETVALUEFROMFRAMES_OFFSET UNITYSDK_OFFSET(0x1E2DC700)
#define UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_TOSTRINGRELATEDPATH_OFFSET UNITYSDK_OFFSET(0x1E2E0260)
#define UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0760)
#define UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0750)

namespace UnityEngine::Timeline::CutScene
{
	inline static constexpr unsigned int CutSceneUtils_TypeDefinitionIndex = 32452;

	class CutSceneUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>** StaticGet_lastMaterialRefreshTime()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CutSceneUtils_TypeDefinitionIndex)->GetStaticField(0x266D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::KFrameFieldType>** StaticGet_PropertyMapFieldType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::KFrameFieldType>**)Il2CppClass::FromTypeDefinitionIndex(CutSceneUtils_TypeDefinitionIndex)->GetStaticField(0x266D8);
		}
		static ::System::Action_1<::UnityEngine::Material*>** StaticGet_m_fcMakeAvatarMatKeywordChange()
		{
			return (::System::Action_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(CutSceneUtils_TypeDefinitionIndex)->GetStaticField(0x266E0);
		}
		static ::UnityEngine::AnimationCurve** StaticGet__curve()
		{
			return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(CutSceneUtils_TypeDefinitionIndex)->GetStaticField(0x266E8);
		}
		static ::System::Single* StaticGet_mixDeltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CutSceneUtils_TypeDefinitionIndex)->GetStaticField(0x7E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetChildLevel(::UnityEngine::GameObject* parent, ::UnityEngine::GameObject* child)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_GETCHILDLEVEL_OFFSET))(parent, child);
		}

		static ::UnityEngine::Keyframe GetValueFromFrames(::System::Single curTime, ::UnityEngine::Keyframe preFrame, ::UnityEngine::Keyframe lastFrame)
		{
			return ((::UnityEngine::Keyframe(*)(::System::Single, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_GETVALUEFROMFRAMES_OFFSET))(curTime, preFrame, lastFrame);
		}

		static ::UnityEngine::Timeline::KFrameFieldType CheckKFrameFieldType(::MoleMole::Timeline::RecorderUnitType frameType, ::System::String* propertyName)
		{
			return ((::UnityEngine::Timeline::KFrameFieldType(*)(::MoleMole::Timeline::RecorderUnitType, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_CHECKKFRAMEFIELDTYPE_OFFSET))(frameType, propertyName);
		}

		static ::System::Void ForceRefreshMaterial(::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_FORCEREFRESHMATERIAL_OFFSET))(material);
		}

		static ::System::String* ToStringRelatedPath(::UnityEngine::GameObject* obj)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CUTSCENE_CUTSCENEUTILS_TOSTRINGRELATEDPATH_OFFSET))(obj);
		}
	};
}
