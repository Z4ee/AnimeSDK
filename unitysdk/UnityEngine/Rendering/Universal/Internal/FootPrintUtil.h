#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GENERATEQUADMESH_OFFSET UNITYSDK_OFFSET(0x19288840)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETCHILD_OFFSET UNITYSDK_OFFSET(0x192881B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETFOOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x19288540)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETORTHOPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x19288630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETWHEELTRANSFORM_OFFSET UNITYSDK_OFFSET(0x192885D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GET_S_FOOTPRINTQUADMESH_OFFSET UNITYSDK_OFFSET(0x19288C70)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintUtil_TypeDefinitionIndex = 30500;

	class FootPrintUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet__s_quadMesh()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(FootPrintUtil_TypeDefinitionIndex)->GetStaticField(0x23480);
		}

		static ::UnityEngine::Transform* GetChild(::UnityEngine::Transform* parentTransform, ::System::String* name)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETCHILD_OFFSET))(parentTransform, name);
		}

		static ::System::Void GetFootTransform(::UnityEngine::Transform* parentTransform, ::System::String* leftName, ::System::String* rightName, ::UnityEngine::Transform*& left, ::UnityEngine::Transform*& right)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::String*, ::System::String*, ::UnityEngine::Transform*&, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETFOOTTRANSFORM_OFFSET))(parentTransform, leftName, rightName, left, right);
		}

		static ::System::Void GetWheelTransform(::UnityEngine::Transform* parentTransform, ::System::String* wheelBoneName, ::UnityEngine::Transform*& wheelBone)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Transform*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETWHEELTRANSFORM_OFFSET))(parentTransform, wheelBoneName, wheelBone);
		}

		static ::UnityEngine::Matrix4x4 GetOrthoProjectionMatrix(::System::Single aspect, ::System::Single orthograhpicSize, ::System::Single near, ::System::Single far)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GETORTHOPROJECTIONMATRIX_OFFSET))(aspect, orthograhpicSize, near, far);
		}

		static ::UnityEngine::Mesh* GenerateQuadMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GENERATEQUADMESH_OFFSET))();
		}

		static ::UnityEngine::Mesh* get_s_FootPrintQuadMesh()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_FOOTPRINTUTIL_GET_S_FOOTPRINTQUADMESH_OFFSET))();
		}
	};
}
