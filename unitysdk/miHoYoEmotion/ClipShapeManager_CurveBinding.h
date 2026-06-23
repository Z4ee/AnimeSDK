#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/miHoYoEmotion/ClipShapeManager_CurveBinding_BindingType.h"
#include "unitysdk/miHoYoEmotion/ClipShapeManager_CurveBinding_BoneParamType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace miHoYoEmotion { class ClipShapeManager; }
namespace miHoYoEmotion { class EyeKey; }

#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_APPLY_OFFSET UNITYSDK_OFFSET(0x1BAF3920)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BAF79D0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_GETORIGINVALUE_OFFSET UNITYSDK_OFFSET(0x1BAE6FD0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1BAE7100)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAF7F00)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF7EF0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_CurveBinding_TypeDefinitionIndex = 39357;

	class ClipShapeManager_CurveBinding : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_PROP_ID_2_PROP_NAME()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ClipShapeManager_CurveBinding_TypeDefinitionIndex)->GetStaticField(0x2AFA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_PROP_NAME_2_PROP_ID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ClipShapeManager_CurveBinding_TypeDefinitionIndex)->GetStaticField(0x2AFA8);
		}
		static ::UnityEngine::Vector3* StaticGet__tempEuler()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ClipShapeManager_CurveBinding_TypeDefinitionIndex)->GetStaticField(0x98C0);
		}
		static ::UnityEngine::Vector3* StaticGet__tempScale()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(ClipShapeManager_CurveBinding_TypeDefinitionIndex)->GetStaticField(0x98CC);
		}
		::miHoYoEmotion::ClipShapeManager_CurveBinding_BindingType bindingType; // 0x10
		::UnityEngine::Transform* bindingTrans; // 0x18
		::UnityEngine::Renderer* bindingRender; // 0x20
		::miHoYoEmotion::EyeKey* bindingEyeKey; // 0x28
		::System::Int32 propertyID; // 0x30
		::System::Single originValue; // 0x34
		::System::String* boneName; // 0x38
		::miHoYoEmotion::ClipShapeManager_CurveBinding_BoneParamType boneParamType; // 0x40
		::UnityEngine::MaterialPropertyBlock* _prop; // 0x48
		::System::Int32 _propNameID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::miHoYoEmotion::ClipShapeManager_CurveBinding* binding)
		{
			return ((::System::Boolean(*)(::PVOID, ::miHoYoEmotion::ClipShapeManager_CurveBinding*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_EQUALS_OFFSET))(this, binding);
		}

		::System::Void Apply(::System::Single value, ::miHoYoEmotion::ClipShapeManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::miHoYoEmotion::ClipShapeManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_APPLY_OFFSET))(this, value, manager);
		}

		::System::Single GetValue(::System::Boolean& getSucces, ::miHoYoEmotion::ClipShapeManager* manager)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean&, ::miHoYoEmotion::ClipShapeManager*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_GETVALUE_OFFSET))(this, getSucces, manager);
		}

		::System::Single GetOriginValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CURVEBINDING_GETORIGINVALUE_OFFSET))(this);
		}
	};
}
