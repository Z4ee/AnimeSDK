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

#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_CLEANUP_OFFSET UNITYSDK_OFFSET(0xF795000)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_GETORTHOPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0xF795670)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF794850)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_REBUILDMATRICES_OFFSET UNITYSDK_OFFSET(0xF7953C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM_RESIZE_OFFSET UNITYSDK_OFFSET(0xF794DE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xF795810)
#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_OFFSCREENPARTICLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xF795800)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OffscreenParticleManager_OffscreenParticleItem_TypeDefinitionIndex = 26719;

	class OffscreenParticleManager_OffscreenParticleItem : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_InstanceOffset()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(OffscreenParticleManager_OffscreenParticleItem_TypeDefinitionIndex)->GetStaticField(0x7500);
		}
		::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc Desc; // 0x10
		::UnityEngine::Transform* Transform; // 0x50
		::UnityEngine::Animation* Animation; // 0x58
		::Il2CppArray<::UnityEngine::ParticleSystem*>* ParticleSystems; // 0x60
		::UnityEngine::GameObject* GOInstance; // 0x68
		::System::String* Name; // 0x70
		::Il2CppArray<::UnityEngine::Renderer*>* Renderers; // 0x78
		::System::Collections::Generic::LinkedListNode_1<::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_OffscreenParticleItem*>* Node; // 0x80
		::UnityEngine::NAPRenderPipeline0::AssetPathInSRP AssetPath; // 0x88
		::UnityEngine::RenderTexture* RT; // 0x98
		::UnityEngine::Matrix4x4 ViewMat; // 0xA0
		::UnityEngine::Bounds ScreenBounds; // 0xE0
		::System::Boolean IsPath; // 0xF8
		::System::Byte DrawSetId; // 0xF9
		::System::Boolean IsNew; // 0xFA
		::UnityEngine::Matrix4x4 ProjMat; // 0xFC
		::System::Int32 StartFrame; // 0x13C

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
