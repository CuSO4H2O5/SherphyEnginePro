#pragma once

#if !defined(SHPY_NO_RETURN)
	#if defined(_MSC_VER) && (_MSC_VER >=1300)
		#define SHPY_NO_RETURN __declspec(noreturn)
	#else
		#define SHPY_NO_RETURN [[noreturn]]
	#endif
#endif

#if !defined(SHPY_API)
	#if defined(SHPY_DLL)
		#if defined(SHPY_IMPORT_API)
			#if defined(_MSC_VER)
			#define SHPY_API      __declspec(dllimport)
			#else
			#define SHPY_API      __attribute(dllimport)
			#endif
		#else defined(SHERPHY_SHARED_API)
			#if defined(_MSC_VER)
			#define SHPY_API      __declspec(dllexport)
			#else
			#define SHPY_API      __attribute(dllexport)
			#endif
		#endif
	#else
		#define SHPY_API
	#endif
#endif
