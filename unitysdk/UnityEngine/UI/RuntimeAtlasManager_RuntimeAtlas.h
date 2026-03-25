#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_InsertionStatus.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_RuntimeAtlas_Block.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_RuntimeAtlas_ClearCmd.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_RuntimeAtlas_CopyCmd.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_RuntimeAtlas_CopyShader.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_RuntimeAtlas___c__DisplayClass16_0.h"
#include "unitysdk/UnityEngine/UI/RuntimeAtlasManager_RuntimeAtlas___c__DisplayClass7_0.h"
#include "unitysdk/UnityEngine/UI/SpriteElement.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::UI { class RuntimeAtlasManager_PackedAtlas; }

#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_BUILD_OFFSET UNITYSDK_OFFSET(0x18B58C50)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_CHECKALIVE_OFFSET UNITYSDK_OFFSET(0x18B595A0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18B58040)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_ERASE_OFFSET UNITYSDK_OFFSET(0x18B58410)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_EXECUTECLEARCMDIMPL_OFFSET UNITYSDK_OFFSET(0x18B59A20)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_EXECUTECOPYCMDIMPL_OFFSET UNITYSDK_OFFSET(0x18B59E30)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_EXECUTECOPYCMD_OFFSET UNITYSDK_OFFSET(0x18B58380)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_GETVALIDFORMAT_OFFSET UNITYSDK_OFFSET(0x18B58190)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_GET_ATLASTEX_OFFSET UNITYSDK_OFFSET(0x18B58C40)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_GET_CLEARED_OFFSET UNITYSDK_OFFSET(0x18B57FA0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_INSERT_OFFSET UNITYSDK_OFFSET(0x18B56D60)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_ISPACKABLE_OFFSET UNITYSDK_OFFSET(0x18B58150)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_RELEASE_OFFSET UNITYSDK_OFFSET(0x18B57880)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_TRYGETSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x18B56F70)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_TRYINSERT_OFFSET UNITYSDK_OFFSET(0x18B590D0)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_UPDATEAVAILABLE_OFFSET UNITYSDK_OFFSET(0x18B57F90)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B5A660)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x18B56120)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__INSERT_G__FINDBLOCKSIZE_7_0_OFFSET UNITYSDK_OFFSET(0x18B59020)
#define UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__TRYINSERT_G__SPAWNSECONDLEAF_16_0_OFFSET UNITYSDK_OFFSET(0x18B5A940)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RuntimeAtlasManager_RuntimeAtlas_TypeDefinitionIndex = 5681;

	class RuntimeAtlasManager_RuntimeAtlas : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet_k_AtlasSizeToDepth()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_RuntimeAtlas_TypeDefinitionIndex)->GetStaticField(0x5DB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>** StaticGet_m_BaseOffset()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeAtlasManager_RuntimeAtlas_TypeDefinitionIndex)->GetStaticField(0x5DB8);
		}
		::UnityEngine::Texture* m_Tex; // 0x10
		::UnityEngine::UI::RuntimeAtlasManager_PackedAtlas* m_PackedAtlas; // 0x18
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_TexFormat; // 0x20
		::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyShader m_CopyShader; // 0x28
		::UnityEngine::Material* m_CopyMat; // 0x40
		::UnityEngine::Texture* m_ClearTex; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* m_TrackedTexture; // 0x50
		::Il2CppArray<::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_Block>* m_Blocks; // 0x58
		::Il2CppArray<::System::Int32>* m_Stride; // 0x60
		::System::Int32 m_Depth; // 0x68
		::System::Int32 m_MaxBlockSize; // 0x6C
		::System::Int32 m_AtlasSize; // 0x70
		::System::Int32 m_TexCount; // 0x74
		::Il2CppArray<::System::Int32>* m_BlockSize; // 0x78
		::Il2CppArray<::System::Int32>* m_Offset; // 0x80
		::System::Int32 m_BlockPadding; // 0x88
		::UnityEngine::Rendering::CommandBuffer* m_CmdBuffer; // 0x90
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd>* m_CopyCmds; // 0x98
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_ClearCmd>* m_ClearCmds; // 0xA0
		::System::Collections::Generic::HashSet_1<::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas_CopyCmd>* m_DistinctCmds; // 0xA8
		::System::Int32 m_ParamsID; // 0xB0
		::System::Int32 m_SrcTexID; // 0xB4
		::System::Int32 m_DstTexID; // 0xB8

		::System::Void _ctor(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 atlasSize, ::System::Int32 maxBlockSize, ::UnityEngine::ComputeShader* copyShader, ::UnityEngine::Material* copyMat, ::UnityEngine::Texture* clearTex, ::UnityEngine::UI::RuntimeAtlasManager_PackedAtlas* packedAtlas)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeShader*, ::UnityEngine::Material*, ::UnityEngine::Texture*, ::UnityEngine::UI::RuntimeAtlasManager_PackedAtlas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__CTOR_OFFSET))(this, format, atlasSize, maxBlockSize, copyShader, copyMat, clearTex, packedAtlas);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__CCTOR_OFFSET))();
		}

		::UnityEngine::Texture* get_atlasTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_GET_ATLASTEX_OFFSET))(this);
		}

		static ::System::Boolean IsPackable(::UnityEngine::Sprite* sprite)
		{
			return ((::System::Boolean(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_ISPACKABLE_OFFSET))(sprite);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetValidFormat(::UnityEngine::Sprite* sprite, ::System::Boolean needPadding)
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_GETVALIDFORMAT_OFFSET))(sprite, needPadding);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_RELEASE_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Texture* texture)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_CONTAINS_OFFSET))(this, texture);
		}

		::UnityEngine::UI::RuntimeAtlasManager_InsertionStatus Insert(::UnityEngine::Texture* texture, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::UnityEngine::UI::RuntimeAtlasManager_InsertionStatus(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_INSERT_OFFSET))(this, texture, format);
		}

		::System::Boolean TryGetScaleOffset(::UnityEngine::UI::SpriteElement& element, ::UnityEngine::Vector2& uvScale, ::UnityEngine::Vector2& uvOffset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_TRYGETSCALEOFFSET_OFFSET))(this, element, uvScale, uvOffset);
		}

		::System::Boolean Erase(::UnityEngine::UI::SpriteElement& element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::SpriteElement&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_ERASE_OFFSET))(this, element);
		}

		::System::Void UpdateAvailable(::System::Boolean unloadUnUsed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_UPDATEAVAILABLE_OFFSET))(this, unloadUnUsed);
		}

		::System::Void ExecuteCopyCmd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_EXECUTECOPYCMD_OFFSET))(this);
		}

		::System::Void ExecuteClearCmdImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_EXECUTECLEARCMDIMPL_OFFSET))(this);
		}

		::System::Void ExecuteCopyCmdImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_EXECUTECOPYCMDIMPL_OFFSET))(this);
		}

		::System::Int32 CheckAlive(::System::Boolean unloadUnUsed, ::System::Int32 baseIndex, ::System::Int32 depth)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_CHECKALIVE_OFFSET))(this, unloadUnUsed, baseIndex, depth);
		}

		::System::Void Build(::UnityEngine::Vector2Int baseOffset, ::System::Int32 blockSize, ::System::Int32 depth, ::System::Int32& index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_BUILD_OFFSET))(this, baseOffset, blockSize, depth, index);
		}

		::System::Int32 TryInsert(::UnityEngine::Texture* texture, ::System::Int32 blockSize, ::System::Int32 baseIndex, ::System::Int32 depth)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_TRYINSERT_OFFSET))(this, texture, blockSize, baseIndex, depth);
		}

		::System::Boolean get_cleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS_GET_CLEARED_OFFSET))(this);
		}

		::System::Int32 _Insert_g__FindBlockSize_7_0(::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas___c__DisplayClass7_0& a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas___c__DisplayClass7_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__INSERT_G__FINDBLOCKSIZE_7_0_OFFSET))(this, a1);
		}

		::System::Void _TryInsert_g__SpawnSecondLeaf_16_0(::System::Int32 index, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas___c__DisplayClass16_0& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::RuntimeAtlasManager_RuntimeAtlas___c__DisplayClass16_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RUNTIMEATLASMANAGER_RUNTIMEATLAS__TRYINSERT_G__SPAWNSECONDLEAF_16_0_OFFSET))(this, index, a2);
		}
	};
}
