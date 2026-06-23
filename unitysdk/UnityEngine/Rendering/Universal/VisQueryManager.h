#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisQueryManager_QueryParam.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisQueryManager_QuerySession.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisQueryManager_RegisteredItem.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_CLEANUPSESSIONRESOURCES_OFFSET UNITYSDK_OFFSET(0x1D3E5760)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1D3E57E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_DEBUGDRAWQUERYITEM_OFFSET UNITYSDK_OFFSET(0x1D3E6050)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D3E50B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_GETVISIBLERATIO_OFFSET UNITYSDK_OFFSET(0x1D3E5E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_LAUNCHNEWQUERY_OFFSET UNITYSDK_OFFSET(0x1D3E6390)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_ONREADBACKREADY_OFFSET UNITYSDK_OFFSET(0x1D3E60C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_REGISTERRECT_OFFSET UNITYSDK_OFFSET(0x1D3E5B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1D3E5C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_RESIZE_OFFSET UNITYSDK_OFFSET(0x1D3E55E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_SETQUERYSHADER_OFFSET UNITYSDK_OFFSET(0x1D3E5B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1D3E5D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D3E6EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E7050)
#define UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E51C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisQueryManager_TypeDefinitionIndex = 26651;

	class VisQueryManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::VisQueryManager** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::VisQueryManager**)Il2CppClass::FromTypeDefinitionIndex(VisQueryManager_TypeDefinitionIndex)->GetStaticField(0x21300);
		}
		static ::System::Int32* StaticGet_MinUpdateFrames()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisQueryManager_TypeDefinitionIndex)->GetStaticField(0x6080);
		}
		static ::System::Int32* StaticGet_DebugForceQuerySize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VisQueryManager_TypeDefinitionIndex)->GetStaticField(0x6084);
		}
		static ::System::Boolean* StaticGet_DebugDrawQuery()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VisQueryManager_TypeDefinitionIndex)->GetStaticField(0x6088);
		}
		// static const ::System::Int32 InitialSize = 0x20; // 0x0
		// static const ::System::Int32 GenShift = 0x14; // 0x0
		// static const ::System::Int32 InvalidIndex = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MaxSessions = 0x6; // 0x0
		// static const ::System::Int32 MaxQueriesPerFrame = 0x40; // 0x0
		// static const ::System::Int32 GroupSize = 0x40; // 0x0
		// static const ::System::Single invIntMax; // 0x0
		::UnityEngine::ComputeShader* queryShader; // 0x10
		::UnityEngine::Camera* lastTestedCamera; // 0x18
		::Il2CppArray<::UnityEngine::Rendering::Universal::VisQueryManager_QuerySession>* querySessions; // 0x20
		::Il2CppArray<::UnityEngine::Rendering::Universal::VisQueryManager_RegisteredItem>* registeredItems; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::VisQueryManager_QueryParam>* tmpParamBuffer; // 0x30
		::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::UInt32>* requestedHandles; // 0x38
		::System::Int32 NameResults; // 0x40
		::System::Int32 registerdCount; // 0x44
		::System::Int32 SizeOfQueryParam; // 0x48
		::System::Int32 NameThreadCount; // 0x4C
		::System::Int32 NameVPMatrix; // 0x50
		::System::Int32 NameDepthTex; // 0x54
		::System::Int32 launchIndex; // 0x58
		::System::Int32 NameInputParams; // 0x5C
		::System::Int32 NameTimeStamp; // 0x60
		::System::Int32 NameTexSize; // 0x64
		::System::Int32 nextAvailIndex; // 0x68
		::System::UInt32 curLoopStamp; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::VisQueryManager* GetInstance()
		{
			return ((::UnityEngine::Rendering::Universal::VisQueryManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_GETINSTANCE_OFFSET))();
		}

		static ::System::Void CleanupSessionResources(::UnityEngine::Rendering::Universal::VisQueryManager_QuerySession& session)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::VisQueryManager_QuerySession&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_CLEANUPSESSIONRESOURCES_OFFSET))(session);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_CLEANUP_OFFSET))(this);
		}

		::System::Void SetQueryShader(::UnityEngine::ComputeShader* cs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_SETQUERYSHADER_OFFSET))(this, cs);
		}

		::System::Void Resize(::System::Int32 newSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_RESIZE_OFFSET))(this, newSize);
		}

		::System::UInt32 RegisterRect(::UnityEngine::Transform* transform, ::UnityEngine::Vector3 refPointOffset, ::UnityEngine::Vector2 rectSize)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_REGISTERRECT_OFFSET))(this, transform, refPointOffset, rectSize);
		}

		::System::UInt32 Register(::UnityEngine::Transform* transform, ::UnityEngine::Vector3& refPointOffset, ::UnityEngine::Vector4 shapeData)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_REGISTER_OFFSET))(this, transform, refPointOffset, shapeData);
		}

		::System::Void Unregister(::System::UInt32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_UNREGISTER_OFFSET))(this, handle);
		}

		::System::Single GetVisibleRatio(::System::UInt32 handle)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_GETVISIBLERATIO_OFFSET))(this, handle);
		}

		::System::Void DebugDrawQueryItem(::UnityEngine::Rendering::Universal::VisQueryManager_RegisteredItem citem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisQueryManager_RegisteredItem))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_DEBUGDRAWQUERYITEM_OFFSET))(this, citem);
		}

		static ::System::Void OnReadbackReady(::System::Int32 slot)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_ONREADBACKREADY_OFFSET))(slot);
		}

		::System::Void LaunchNewQuery(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_LAUNCHNEWQUERY_OFFSET))(this, cmd, camera);
		}

		::System::Void Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_VISQUERYMANAGER_UPDATE_OFFSET))(this, cmd, camera);
		}
	};
}
