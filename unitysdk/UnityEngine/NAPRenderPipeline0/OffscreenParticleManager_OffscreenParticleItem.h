#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OffscreenParticleManager_DamageParticleItemDesc.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_CLEANUP_OFFSET UNITYSDK_OFFSET(0x11091E10)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_GETORTHOPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x11092480)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x11091670)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_REBUILDMATRICES_OFFSET UNITYSDK_OFFSET(0x110921D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_RESIZE_OFFSET UNITYSDK_OFFSET(0x11091C00)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11092620)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11092610)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OffscreenParticleManager_OffscreenParticleItem_TypeDefinitionIndex = 27677;

	class OffscreenParticleManager_OffscreenParticleItem : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_InstanceOffset()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_OffscreenParticleItem_TypeDefinitionIndex)->GetStaticField(0x75D0);
		}
		::UnityEngine::RenderTexture* RT; // 0x10
		::System::Collections::Generic::LinkedListNode_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* Node; // 0x18
		::System::String* Name; // 0x20
		::Il2CppArray<::UnityEngine::ParticleSystem*>* ParticleSystems; // 0x28
		::UnityEngine::Animation* Animation; // 0x30
		::UnityEngine::Transform* Transform; // 0x38
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x40
		::UnityEngine::GameObject* GOInstance; // 0x48
		::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc Desc; // 0x50
		::UnityEngine::NAPRenderPipeline0::AssetPathInSRP AssetPath; // 0x90
		::UnityEngine::Matrix4x4 ViewMat; // 0xA0
		::UnityEngine::Matrix4x4 ProjMat; // 0xE0
		::UnityEngine::Bounds ScreenBounds; // 0x120
		::System::Int32 StartFrame; // 0x138
		::System::Boolean IsNew; // 0x13C
		::System::Boolean IsPath; // 0x13D
		::System::Byte DrawSetId; // 0x13E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Initialize(::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc& desc, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* node, ::System::Byte drawSetId)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc&, ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>*, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_INITIALIZE_OFFSET))(this, desc, node, drawSetId);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_CLEANUP_OFFSET))(this);
		}

		::System::Void Resize(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_RESIZE_OFFSET))(this, width, height);
		}

		static ::UnityEngine::Matrix4x4 GetOrthoProjectionMatrix(::System::Single aspect, ::System::Single orthograhpicSize)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_GETORTHOPROJECTIONMATRIX_OFFSET))(aspect, orthograhpicSize);
		}

		::System::Void RebuildMatrices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_REBUILDMATRICES_OFFSET))(this);
		}
	};
}
