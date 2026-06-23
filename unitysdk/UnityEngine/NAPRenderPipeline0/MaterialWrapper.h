#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/BaseMaterialWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MaterialWrapper_SetTexCmd.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class BaseCachedConstantBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_CALCDIRTYFLAG_OFFSET UNITYSDK_OFFSET(0x1D426BA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x1D426B10)
#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1D426E80)
#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_GETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x1D426A80)
#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1D426B90)
#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D426B70)
#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D426AC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4268D0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MaterialWrapper_TypeDefinitionIndex = 5999;

	class MaterialWrapper : public ::UnityEngine::NAPRenderPipeline0::BaseMaterialWrapper
	{
	public:
		::System::Int32 LastUsedTime; // 0x20
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::MaterialWrapper_SetTexCmd>* m_SetTexCmds; // 0x28
		::System::Int32 m_SetTexCmdCount; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* m_EnabledKeywords; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* m_LastEnabledKeywords; // 0x40
		::System::Boolean m_KeywordsDirty; // 0x48
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>* m_CBs; // 0x50

		::System::Void _ctor(::UnityEngine::Material* materialObject, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>* cbs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER__CTOR_OFFSET))(this, materialObject, cbs);
		}

		::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer* GetConstantBuffer(::System::Int32 index)
		{
			return ((::UnityEngine::NAPRenderPipeline0::BaseCachedConstantBuffer*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_GETCONSTANTBUFFER_OFFSET))(this, index);
		}

		::System::Void SetTexture(::System::Int32 nameID, ::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_SETTEXTURE_OFFSET))(this, nameID, tex);
		}

		::System::Void EnableKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_ENABLEKEYWORD_OFFSET))(this, keyword);
		}

		static ::UnityEngine::Material* op_Implicit(::UnityEngine::NAPRenderPipeline0::MaterialWrapper* wrapper)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::NAPRenderPipeline0::MaterialWrapper*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_OP_IMPLICIT_OFFSET))(wrapper);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_ISVALID_OFFSET))(this);
		}

		::System::Void CalcDirtyFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_CALCDIRTYFLAG_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MATERIALWRAPPER_FLUSH_OFFSET))(this);
		}
	};
}
