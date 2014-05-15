/*!
 * @file 		shm_common.h
 * @author 		Zdenek Travnicek <travnicek@iim.cz>
 * @date 		7.5.2014
 * @copyright	Institute of Intermedia, CTU in Prague, 2014
 * 				Distributed under BSD Licence, details in file doc/LICENSE
 *
 */


#ifndef SHM_COMMON_H_
#define SHM_COMMON_H_


namespace shm {

/*!
 * Simplistic class representing a block of shared memory
 *

 */
class ShmBlock
{
public:
	/*!
	 * Constructor
	 * If constructed with @em create = true, it will attempt to create the SHM segment,
	 * when there's none with the key provided.
	 * Setting @em create = true also implies that the block will be deleted upon destruction of the object.
	 *
	 * In a case of any problem, it throws std::runtime_error.
	 *
	 * @param key		The key to identify memory segment
	 * @param size		Size of the segment
	 * @param create	Specified, whether the segment should be created if not-existent.
	 */
	ShmBlock(int key, int size, bool create = false);
	virtual ~ShmBlock() noexcept;
	/*!
	 * Returns mapped memory segment
	 */
	volatile void* data_ptr();
	/*!
	 * Returns mapped memory segment
	 */
	const volatile void* data_ptr() const;
private:
	int handle_;
	volatile void* data_;
	bool created_;
};

}
#endif /* SHM_COMMON_H_ */
