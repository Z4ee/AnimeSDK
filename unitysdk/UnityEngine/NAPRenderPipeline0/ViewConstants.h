#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_VIEWCONSTANTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D7C10)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ViewConstants_TypeDefinitionIndex = 5967;

	class ViewConstants : public ::System::Object
	{
	public:
		::UnityEngine::Matrix4x4 viewMatrix; // 0x10
		::UnityEngine::Matrix4x4 rawProjMatrix; // 0x50
		::UnityEngine::Matrix4x4 invProjMatrix; // 0x90
		::UnityEngine::Matrix4x4 invViewProjMatrix; // 0xD0
		::UnityEngine::Matrix4x4 nonJitteredViewProjMatrix; // 0x110
		::UnityEngine::Matrix4x4 nonJitteredProjMatrix; // 0x150
		::UnityEngine::Matrix4x4 prevViewProjMatrix; // 0x190
		::UnityEngine::Matrix4x4 prevViewMatrix; // 0x1D0
		::UnityEngine::Matrix4x4 prevProjMatrix; // 0x210
		::UnityEngine::Matrix4x4 prevRawProjMatrix; // 0x250
		::UnityEngine::Matrix4x4 prevInvViewProjMatrix; // 0x290
		::UnityEngine::Matrix4x4 pixelCoordToViewDirWS; // 0x2D0
		::UnityEngine::Matrix4x4 viewProjectionNoCameraTrans; // 0x310
		::UnityEngine::Vector3 worldSpaceCameraPos; // 0x350
		::System::Single pad0; // 0x35C
		::System::Single pad1; // 0x360
		::UnityEngine::Vector3 prevWorldSpaceCameraPos; // 0x364
		::System::Single pad2; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VIEWCONSTANTS__CTOR_OFFSET))(this);
		}
	};
}
