#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_CLEARDUMMYCACHEDSHADERKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1E66E570)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_ENQUEUEGAMEPLAYKEYWORD_OFFSET UNITYSDK_OFFSET(0x1E66D0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_ENQUEUEGAMEPLAYPENDINGKEYWORD_OFFSET UNITYSDK_OFFSET(0x1E66D730)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_FLUSHGAMEPLAYKEYWORDS_OFFSET UNITYSDK_OFFSET(0x1E66D930)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RENTINNERKEYWORDDICT_OFFSET UNITYSDK_OFFSET(0x1E66D4F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RENTOUTERKEYWORDDICT_OFFSET UNITYSDK_OFFSET(0x1E66DFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RETURNINNERKEYWORDDICT_OFFSET UNITYSDK_OFFSET(0x1E66EC40)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RETURNOUTERKEYWORDDICT_OFFSET UNITYSDK_OFFSET(0x1E66E190)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_SETKEYWORDFORURP_OFFSET UNITYSDK_OFFSET(0x1E66ED60)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_SHOWGAMEPLAYKEYWORDSCACHERATE_OFFSET UNITYSDK_OFFSET(0x1E66E3A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_SHOWKEYWORDSCACHERATE_OFFSET UNITYSDK_OFFSET(0x1E66F1C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_UPDATECACHEDKEYWORDSTATE_OFFSET UNITYSDK_OFFSET(0x1E66D680)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E66F390)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E66F380)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapKeyWordManager_TypeDefinitionIndex = 26944;

	class NapKeyWordManager : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_GameplayKeywordLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x23810);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>** StaticGet_s_EngineKeywordsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x23818);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>** StaticGet_s_GameplayKeywordsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x23820);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>** StaticGet_s_GameplayPendingKeywords()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x23828);
		}
		static ::System::Collections::Generic::Stack_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>*>** StaticGet_s_OuterKeywordDictPool()
		{
			return (::System::Collections::Generic::Stack_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x23830);
		}
		static ::System::Collections::Generic::Stack_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>** StaticGet_s_InnerKeywordDictPool()
		{
			return (::System::Collections::Generic::Stack_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x23838);
		}
		static ::System::Int32* StaticGet_tickCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x6FD0);
		}
		static ::System::Int32* StaticGet_s_GameplayTickCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x6FD4);
		}
		static ::System::Int64* StaticGet_s_GameplayKeywordSetCount()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x6FD8);
		}
		static ::System::Int64* StaticGet_s_CacheHitCount()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x6FE0);
		}
		static ::System::Int64* StaticGet_s_InvokeCount()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x6FE8);
		}
		static ::System::Int64* StaticGet_s_GameplayInvokeCount()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(NapKeyWordManager_TypeDefinitionIndex)->GetStaticField(0x6FF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void EnqueueGameplayKeyword(::UnityEngine::Material* material, ::System::Int32 keyword, ::System::Boolean enableKey)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_ENQUEUEGAMEPLAYKEYWORD_OFFSET))(material, keyword, enableKey);
		}

		static ::System::Void EnqueueGameplayPendingKeyword(::UnityEngine::Material* material, ::System::Int32 keyword, ::System::Boolean enableKey)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_ENQUEUEGAMEPLAYPENDINGKEYWORD_OFFSET))(material, keyword, enableKey);
		}

		static ::System::Void FlushGameplayKeywords()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_FLUSHGAMEPLAYKEYWORDS_OFFSET))();
		}

		static ::System::Void ShowGameplayKeywordsCacheRate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_SHOWGAMEPLAYKEYWORDSCACHERATE_OFFSET))();
		}

		static ::System::Void ClearDummyCachedShaderKeywords()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_CLEARDUMMYCACHEDSHADERKEYWORDS_OFFSET))();
		}

		static ::System::Void SetKeywordForURP(::UnityEngine::Material* material, ::System::Int32 keyword, ::System::Boolean enableKey)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_SETKEYWORDFORURP_OFFSET))(material, keyword, enableKey);
		}

		static ::System::Void ShowKeywordsCacheRate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_SHOWKEYWORDSCACHERATE_OFFSET))();
		}

		static ::System::Boolean UpdateCachedKeywordState(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* keywordStates, ::System::Int32 keyword, ::System::Boolean enableKey)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_UPDATECACHEDKEYWORDSTATE_OFFSET))(keywordStates, keyword, enableKey);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* RentInnerKeywordDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RENTINNERKEYWORDDICT_OFFSET))();
		}

		static ::System::Void ReturnInnerKeywordDict(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* dict)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RETURNINNERKEYWORDDICT_OFFSET))(dict);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>* RentOuterKeywordDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RENTOUTERKEYWORDDICT_OFFSET))();
		}

		static ::System::Void ReturnOuterKeywordDict(::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>* dict)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPKEYWORDMANAGER_RETURNOUTERKEYWORDDICT_OFFSET))(dict);
		}
	};
}
