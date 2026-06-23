#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPBatch/MaterialBatchJobItem.h"
#include "unitysdk/UnityEngine/NAPBatch/MaterialBatchThreadItem.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define UNITYENGINE_MATERIALBATCHAPPLIERHOOK_INVOKE_ONHOOKMATERIALBATCHAPPLIERAPPLYITEMTHREADEXT_OFFSET UNITYSDK_OFFSET(0x1DA214D0)
#define UNITYENGINE_MATERIALBATCHAPPLIERHOOK_INVOKE_ONHOOKMATERIALBATCHAPPLIERAPPLYITEMTHREAD_OFFSET UNITYSDK_OFFSET(0x1DA21440)
#define UNITYENGINE_MATERIALBATCHAPPLIERHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA21560)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialBatchApplierHook_TypeDefinitionIndex = 5348;

	class MaterialBatchApplierHook : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::NAPBatch::MaterialBatchThreadItem, ::System::Boolean>** StaticGet_onHookApplyItemThreadExt()
		{
			return (::System::Action_2<::UnityEngine::NAPBatch::MaterialBatchThreadItem, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialBatchApplierHook_TypeDefinitionIndex)->GetStaticField(0x56B0);
		}
		static ::System::Action_2<::UnityEngine::NAPBatch::MaterialBatchJobItem, ::System::Boolean>** StaticGet_onHookApplyItemThread()
		{
			return (::System::Action_2<::UnityEngine::NAPBatch::MaterialBatchJobItem, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MaterialBatchApplierHook_TypeDefinitionIndex)->GetStaticField(0x56B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALBATCHAPPLIERHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookMaterialBatchApplierApplyItemThread(::UnityEngine::NAPBatch::MaterialBatchJobItem item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchJobItem, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALBATCHAPPLIERHOOK_INVOKE_ONHOOKMATERIALBATCHAPPLIERAPPLYITEMTHREAD_OFFSET))(item, threadSafeCall);
		}

		static ::System::Void invoke_onHookMaterialBatchApplierApplyItemThreadExt(::UnityEngine::NAPBatch::MaterialBatchThreadItem item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchThreadItem, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALBATCHAPPLIERHOOK_INVOKE_ONHOOKMATERIALBATCHAPPLIERAPPLYITEMTHREADEXT_OFFSET))(item, threadSafeCall);
		}
	};
}
