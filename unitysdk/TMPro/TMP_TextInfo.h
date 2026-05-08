#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/MaterialReference.h"
#include "unitysdk/TMPro/TMP_CharacterInfo.h"
#include "unitysdk/TMPro/TMP_LineInfo.h"
#include "unitysdk/TMPro/TMP_LinkInfo.h"
#include "unitysdk/TMPro/TMP_MeshInfo.h"
#include "unitysdk/TMPro/TMP_PageInfo.h"
#include "unitysdk/TMPro/TMP_WordInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace TMPro { class TMP_Text; }

#define TMPRO_TMP_TEXTINFO_CLEARALLDATA_OFFSET UNITYSDK_OFFSET(0x1C085B30)
#define TMPRO_TMP_TEXTINFO_CLEARALLMESHINFO_OFFSET UNITYSDK_OFFSET(0x1C085C70)
#define TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET UNITYSDK_OFFSET(0x1C085DF0)
#define TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET UNITYSDK_OFFSET(0x1C085BF0)
#define TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET UNITYSDK_OFFSET(0x1C085FF0)
#define TMPRO_TMP_TEXTINFO_CLEARUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1C085D60)
#define TMPRO_TMP_TEXTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C085A70)
#define TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1C0860E0)
#define TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET UNITYSDK_OFFSET(0x1C085CE0)
#define TMPRO_TMP_TEXTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C086660)
#define TMPRO_TMP_TEXTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0858C0)
#define TMPRO_TMP_TEXTINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C085970)
#define TMPRO_TMP_TEXTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C085810)

namespace TMPro
{
	inline static constexpr unsigned int TMP_TextInfo_TypeDefinitionIndex = 37597;

	class TMP_TextInfo : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_k_InfinityVectorPositive()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_TextInfo_TypeDefinitionIndex)->GetStaticField(0x9310);
		}
		static ::UnityEngine::Vector2* StaticGet_k_InfinityVectorNegative()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_TextInfo_TypeDefinitionIndex)->GetStaticField(0x9318);
		}
		::TMPro::TMP_Text* textComponent; // 0x10
		::System::Int32 characterCount; // 0x18
		::System::Int32 spriteCount; // 0x1C
		::System::Int32 spaceCount; // 0x20
		::System::Int32 wordCount; // 0x24
		::System::Int32 linkCount; // 0x28
		::System::Int32 lineCount; // 0x2C
		::System::Int32 pageCount; // 0x30
		::System::Int32 materialCount; // 0x34
		::Il2CppArray<::TMPro::TMP_CharacterInfo>* characterInfo; // 0x38
		::Il2CppArray<::TMPro::TMP_WordInfo>* wordInfo; // 0x40
		::Il2CppArray<::TMPro::TMP_LinkInfo>* linkInfo; // 0x48
		::Il2CppArray<::TMPro::TMP_LineInfo>* lineInfo; // 0x50
		::Il2CppArray<::TMPro::TMP_PageInfo>* pageInfo; // 0x58
		::Il2CppArray<::TMPro::TMP_MeshInfo>* meshInfo; // 0x60
		::Il2CppArray<::TMPro::TMP_MeshInfo>* m_CachedMeshInfo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 characterCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_1_OFFSET))(this, characterCount);
		}

		::System::Void _ctor_2(::TMPro::TMP_Text* textComponent)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CTOR_2_OFFSET))(this, textComponent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO__CCTOR_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEAR_OFFSET))(this);
		}

		::System::Void ClearAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARALLDATA_OFFSET))(this);
		}

		::System::Void ClearMeshInfo(::System::Boolean updateMesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARMESHINFO_OFFSET))(this, updateMesh);
		}

		::System::Void ClearAllMeshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARALLMESHINFO_OFFSET))(this);
		}

		::System::Void ResetVertexLayout(::System::Boolean isVolumetric)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_RESETVERTEXLAYOUT_OFFSET))(this, isVolumetric);
		}

		::System::Void ClearUnusedVertices(::Il2CppArray<::TMPro::MaterialReference>* materials)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::TMPro::MaterialReference>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARUNUSEDVERTICES_OFFSET))(this, materials);
		}

		::System::Void ClearLineInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARLINEINFO_OFFSET))(this);
		}

		::System::Void ClearPageInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_CLEARPAGEINFO_OFFSET))(this);
		}

		::Il2CppArray<::TMPro::TMP_MeshInfo>* CopyMeshInfoVertexData()
		{
			return ((::Il2CppArray<::TMPro::TMP_MeshInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_TEXTINFO_COPYMESHINFOVERTEXDATA_OFFSET))(this);
		}
	};
}
