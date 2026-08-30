#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BindlessTextureArray; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeBufferArray; }
namespace UnityEngine { class ConstantBufferArray; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1ED31990)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED31930)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1ED318A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_OFFSET UNITYSDK_OFFSET(0x1ED31850)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1ED31A40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_OFFSET UNITYSDK_OFFSET(0x1ED319B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1ED31AC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED31A80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED31910)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_OFFSET UNITYSDK_OFFSET(0x1ED318B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1ED31E30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ED31E20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED33790)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_2_OFFSET UNITYSDK_OFFSET(0x1ED33810)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_3_OFFSET UNITYSDK_OFFSET(0x1ED33610)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_OFFSET UNITYSDK_OFFSET(0x1ED33550)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET UNITYSDK_OFFSET(0x1ED33440)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_2_OFFSET UNITYSDK_OFFSET(0x1ED334C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_3_OFFSET UNITYSDK_OFFSET(0x1ED332C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x1ED331E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31DF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31E00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED32510)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31DA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1ED320C0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31DC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1ED32300)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31DB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1ED321E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1ED32440)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDSFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x1ED31E50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDS_OFFSET UNITYSDK_OFFSET(0x1ED33880)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMESFROMSCRIPT_OFFSET UNITYSDK_OFFSET(0x1ED31E60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET UNITYSDK_OFFSET(0x1ED33A00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED31BA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31B60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1ED32E20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED32DE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED32FC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x1ED33120)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x1ED33150)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1ED32F70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31B00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1ED32D00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1ED32CD0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_1_OFFSET UNITYSDK_OFFSET(0x1ED32D40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_OFFSET UNITYSDK_OFFSET(0x1ED32D10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED330E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x1ED331A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x1ED331D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1ED33090)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED31C10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31BB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1ED32ED0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET UNITYSDK_OFFSET(0x1ED32E60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31C20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1ED32F60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED32F30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETTYPEPROPERTYCOUNT_OFFSET UNITYSDK_OFFSET(0x1ED31E40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYCOUNTIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED33050)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x1ED33160)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x1ED33190)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1ED33000)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED31B50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31B10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED32DA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1ED32D60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1ED31E10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYPROBEOCCLUSIONARRAYFROM_OFFSET UNITYSDK_OFFSET(0x1ED31DE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET UNITYSDK_OFFSET(0x1ED31DD0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31CE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED32820)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1ED327F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31CC0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1ED32710)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET UNITYSDK_OFFSET(0x1ED326E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED31C70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31C60)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1ED31970)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED32650)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED328A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_OFFSET UNITYSDK_OFFSET(0x1ED32870)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31CF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED32860)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_OFFSET UNITYSDK_OFFSET(0x1ED32830)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31CD0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_1_OFFSET UNITYSDK_OFFSET(0x1ED327E0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x1ED327A0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLAG_OFFSET UNITYSDK_OFFSET(0x1ED31AF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED328B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET UNITYSDK_OFFSET(0x1ED32930)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET UNITYSDK_OFFSET(0x1ED329B0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_4_OFFSET UNITYSDK_OFFSET(0x1ED329F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1ED31E70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31C30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1ED31890)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET UNITYSDK_OFFSET(0x1ED32590)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET UNITYSDK_OFFSET(0x1ED32600)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET UNITYSDK_OFFSET(0x1ED325D0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D30)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED32B70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_2_OFFSET UNITYSDK_OFFSET(0x1ED32BF0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_3_OFFSET UNITYSDK_OFFSET(0x1ED32C70)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_4_OFFSET UNITYSDK_OFFSET(0x1ED32CB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET UNITYSDK_OFFSET(0x1ED31FD0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED31C90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31C80)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET UNITYSDK_OFFSET(0x1ED31A00)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET UNITYSDK_OFFSET(0x1ED32690)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x1ED31AE0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31CB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31CA0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x1ED31AB0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x1ED32750)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_3_OFFSET UNITYSDK_OFFSET(0x1ED32790)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0x1ED32720)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31D20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET UNITYSDK_OFFSET(0x1ED32A10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET UNITYSDK_OFFSET(0x1ED32A90)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET UNITYSDK_OFFSET(0x1ED32B10)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_4_OFFSET UNITYSDK_OFFSET(0x1ED32B50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x1ED31F20)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED31C50)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31C40)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED318F0)
#define UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET UNITYSDK_OFFSET(0x1ED32610)
#define UNITYENGINE_MATERIALPROPERTYBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED32420)
#define UNITYENGINE_MATERIALPROPERTYBLOCK__SETRENDERSTATEIMPL_OFFSET UNITYSDK_OFFSET(0x1ED31AD0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialPropertyBlock_TypeDefinitionIndex = 4135;

	class MaterialPropertyBlock : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK__CTOR_OFFSET))(this);
		}

		::System::Void AddFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void AddFloat_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDFLOAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddVector(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddVector_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDVECTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void AddColor_1(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDCOLOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddMatrix(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void AddMatrix_1(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDMATRIX_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddTexture(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void AddTexture_1(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_ADDTEXTURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void _SetRenderStateImpl(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK__SETRENDERSTATEIMPL_OFFSET))(this, a1);
		}

		::System::Void SetRenderState(::UnityEngine::Rendering::RenderStateBlock& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderStateBlock&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERSTATE_OFFSET))(this, a1);
		}

		::System::Void SetFlag(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLAG_OFFSET))(this, a1, a2);
		}

		::System::Single GetFloatImpl(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetVectorImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColorImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 GetMatrixImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* GetTextureImpl(::System::Int32 a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTUREIMPL_OFFSET))(this, a1);
		}

		::System::Void SetFloatImpl(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorImpl(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetColorImpl(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixImpl(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetTextureImpl(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTUREIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetRenderTextureImpl(::System::Int32 a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Rendering::RenderTextureSubElement a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETRENDERTEXTUREIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBufferImpl(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFERIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferImpl(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERIMPL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBindlessTextureArrayImpl(::System::Int32 a1, ::UnityEngine::BindlessTextureArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferArrayImpl(::System::Int32 a1, ::UnityEngine::ConstantBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetComputeBufferArrayImpl(::System::Int32 a1, ::UnityEngine::ComputeBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArrayImpl(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMatrixArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAYIMPL_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Single>* GetFloatArrayImpl(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYIMPL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArrayImpl(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYIMPL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArrayImpl(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYIMPL_OFFSET))(this, a1);
		}

		::System::Int32 GetFloatArrayCountImpl(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAYCOUNTIMPL_OFFSET))(this, a1);
		}

		::System::Int32 GetVectorArrayCountImpl(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAYCOUNTIMPL_OFFSET))(this, a1);
		}

		::System::Int32 GetMatrixArrayCountImpl(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAYCOUNTIMPL_OFFSET))(this, a1);
		}

		::System::Void ExtractFloatArrayImpl(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractVectorArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAYIMPL_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractMatrixArrayImpl(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAYIMPL_OFFSET))(this, a1, a2);
		}

		static ::System::Void Internal_CopySHCoefficientArraysFrom(::UnityEngine::MaterialPropertyBlock* a1, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Internal_CopyProbeOcclusionArrayFrom(::UnityEngine::MaterialPropertyBlock* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_INTERNAL_COPYPROBEOCCLUSIONARRAYFROM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::IntPtr CreateImpl()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CREATEIMPL_OFFSET))();
		}

		static ::System::Void DestroyImpl(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DESTROYIMPL_OFFSET))(a1);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_OFFSET))(this, a1);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_CLEAR_1_OFFSET))(this);
		}

		::System::Int32 GetTypePropertyCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTYPEPROPERTYCOUNT_OFFSET))(this, a1);
		}

		::System::Void GetAllPropertyNameIDsFromScript(::Il2CppArray<::System::Int32>* a1, ::Il2CppArray<::System::Int32>* a2, ::Il2CppArray<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDSFROMSCRIPT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetAllPropertyNamesFromScript(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMESFROMSCRIPT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFloatArray(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetVectorArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetMatrixArray(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ExtractFloatArray(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTFLOATARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractVectorArray(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTVECTORARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void ExtractMatrixArray(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_EXTRACTMATRIXARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFloat(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloat_1(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOAT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_OFFSET))(this, a1, a2);
		}

		::System::Void SetInt_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETINT_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector(::System::String* a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetVector_1(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor(::System::String* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_OFFSET))(this, a1, a2);
		}

		::System::Void SetColor_1(::System::Int32 a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix(::System::String* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrix_1(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIX_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetBuffer(::System::String* a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_OFFSET))(this, a1, a2);
		}

		::System::Void SetBuffer_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBUFFER_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture(::System::String* a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture_1(::System::Int32 a1, ::UnityEngine::Texture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetTexture_2(::System::String* a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Rendering::RenderTextureSubElement a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTexture_3(::System::Int32 a1, ::UnityEngine::RenderTexture* a2, ::UnityEngine::Rendering::RenderTextureSubElement a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTexture*, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETTEXTURE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetConstantBuffer(::System::String* a1, ::UnityEngine::ComputeBuffer* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetConstantBuffer_1(::System::Int32 a1, ::UnityEngine::ComputeBuffer* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFER_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBindlessTextureArray(::System::String* a1, ::UnityEngine::BindlessTextureArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetBindlessTextureArray_1(::System::Int32 a1, ::UnityEngine::BindlessTextureArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::BindlessTextureArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETBINDLESSTEXTUREARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferArray(::System::String* a1, ::UnityEngine::ConstantBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstantBufferArray_1(::System::Int32 a1, ::UnityEngine::ConstantBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ConstantBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCONSTANTBUFFERARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetComputeBufferArray(::System::String* a1, ::UnityEngine::ComputeBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_OFFSET))(this, a1, a2);
		}

		::System::Void SetComputeBufferArray_1(::System::Int32 a1, ::UnityEngine::ComputeBufferArray* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBufferArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOMPUTEBUFFERARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_1(::System::String* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_3(::System::String* a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void SetFloatArray_4(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETFLOATARRAY_4_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_1(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_3(::System::String* a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorArray_4(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORARRAY_4_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_1(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_2(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_3(::System::String* a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixArray_4(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXARRAY_4_OFFSET))(this, a1, a2);
		}

		::System::Single GetFloat(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_OFFSET))(this, a1);
		}

		::System::Single GetFloat_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOAT_1_OFFSET))(this, a1);
		}

		::System::Int32 GetInt(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_OFFSET))(this, a1);
		}

		::System::Int32 GetInt_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETINT_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetVector(::System::String* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 GetVector_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor(::System::String* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color GetColor_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 GetMatrix(::System::String* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 GetMatrix_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIX_1_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* GetTexture(::System::String* a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* GetTexture_1(::System::Int32 a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETTEXTURE_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* GetFloatArray(::System::String* a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* GetFloatArray_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArray(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector4>* GetVectorArray_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArray(::System::String* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* GetMatrixArray_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_1_OFFSET))(this, a1);
		}

		::System::Void GetFloatArray_2(::System::String* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetFloatArray_3(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETFLOATARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void GetVectorArray_2(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetVectorArray_3(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void GetMatrixArray_2(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_2_OFFSET))(this, a1, a2);
		}

		::System::Void GetMatrixArray_3(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXARRAY_3_OFFSET))(this, a1, a2);
		}

		::System::Void CopySHCoefficientArraysFrom(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_OFFSET))(this, a1);
		}

		::System::Void CopySHCoefficientArraysFrom_1(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_1_OFFSET))(this, a1);
		}

		::System::Void CopySHCoefficientArraysFrom_2(::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CopySHCoefficientArraysFrom_3(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYSHCOEFFICIENTARRAYSFROM_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CopyProbeOcclusionArrayFrom(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_OFFSET))(this, a1);
		}

		::System::Void CopyProbeOcclusionArrayFrom_1(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_1_OFFSET))(this, a1);
		}

		::System::Void CopyProbeOcclusionArrayFrom_2(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CopyProbeOcclusionArrayFrom_3(::Il2CppArray<::UnityEngine::Vector4>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_COPYPROBEOCCLUSIONARRAYFROM_3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GetAllPropertyNameIDs(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMEIDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetAllPropertyNames(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETALLPROPERTYNAMES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETVECTORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetColorImpl_Injected(::System::Int32 a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETCOLORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetMatrixImpl_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_GETMATRIXIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetVectorImpl_Injected(::System::Int32 a1, ::UnityEngine::Vector4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETVECTORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetColorImpl_Injected(::System::Int32 a1, ::UnityEngine::Color& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETCOLORIMPL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetMatrixImpl_Injected(::System::Int32 a1, ::UnityEngine::Matrix4x4& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCK_SETMATRIXIMPL_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
