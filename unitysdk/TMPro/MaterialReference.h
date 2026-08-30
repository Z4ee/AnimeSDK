#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_SpriteAsset; }
namespace UnityEngine { class Material; }

#define TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x18B25780)
#define TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B25580)
#define TMPRO_MATERIALREFERENCE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18B254A0)
#define TMPRO_MATERIALREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x3AE8AA0)

namespace TMPro
{
	inline static constexpr unsigned int MaterialReference_TypeDefinitionIndex = 43347;

	struct alignas(8) MaterialReference
	{
		::System::Int32 index; // 0x10
		::TMPro::TMP_FontAsset* fontAsset; // 0x18
		::TMPro::TMP_SpriteAsset* spriteAsset; // 0x20
		::UnityEngine::Material* material; // 0x28
		::System::Boolean isDefaultMaterial; // 0x30
		::System::Boolean isFallbackMaterial; // 0x31
		::UnityEngine::Material* fallbackMaterial; // 0x38
		::System::Single padding; // 0x40
		::System::Int32 referenceCount; // 0x44

		::System::Void _ctor(::System::Int32 a1, ::TMPro::TMP_FontAsset* a2, ::TMPro::TMP_SpriteAsset* a3, ::UnityEngine::Material* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::TMPro::TMP_FontAsset*, ::TMPro::TMP_SpriteAsset*, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Boolean Contains(::Il2CppArray<::TMPro::MaterialReference>* a1, ::TMPro::TMP_FontAsset* a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::TMPro::MaterialReference>*, ::TMPro::TMP_FontAsset*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE_CONTAINS_OFFSET))(a1, a2);
		}

		static ::System::Int32 AddMaterialReference(::UnityEngine::Material* a1, ::TMPro::TMP_FontAsset* a2, ::Il2CppArray<::TMPro::MaterialReference>*& a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::TMPro::TMP_FontAsset*, ::Il2CppArray<::TMPro::MaterialReference>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 AddMaterialReference_1(::UnityEngine::Material* a1, ::TMPro::TMP_SpriteAsset* a2, ::Il2CppArray<::TMPro::MaterialReference>*& a3, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a4)
		{
			return ((::System::Int32(*)(::UnityEngine::Material*, ::TMPro::TMP_SpriteAsset*, ::Il2CppArray<::TMPro::MaterialReference>*&, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + TMPRO_MATERIALREFERENCE_ADDMATERIALREFERENCE_1_OFFSET))(a1, a2, a3, a4);
		}
	};
}
